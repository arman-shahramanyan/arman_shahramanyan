#include <iostream>
#include"binary_tree.h"

using namespace std;

bool check (bool** arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        int countRoot = 0;
        int countTrue = 0;
        for(int j = 0; j < size; j++)
        {
            if (arr[i][j]) countTrue++;
            if (arr[j][i] == 0) countRoot++;
            if (arr[i][j] == 1 && arr[j][i] == 1) return false;

        }
        if (countTrue > 2) return false;
        if (countRoot == size)
        {
            count++;
        }
        else if(countRoot < size - 1) return false;
    }
    if(count != 1) return false;
    return true;
}

int findRoot(bool** arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int countRoot = 0;
        for(int j = 0; j < size; j++)
        {
            if (arr[j][i] == 0) countRoot++;
        }
        if (countRoot == size)
            return i;
    }
    return 0;
}

void addChild(Tree* root, bool** arr, int size, int j, Node* tmp)
{
    int i = j;
    for (int j = 0;j < size; j++)
    {
        if(arr[i][j] == 1)
        {
            tmp = root->insert(tmp, j);
            addChild(root, arr, size, j, tmp);
        }
        
    }
}

void createTree (bool** arr, int size)
{
    
    Tree* root = new Tree(findRoot(arr, size));
    int j = findRoot(arr, size);
    Node* tmp = root->_root;
    addChild(root, arr, size, j, tmp);
    root->DFS();

}

int main()
{
    int size;
	cout << "Input size\n";
	cin >> size;
	bool **arr = new bool*[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new bool[i];
        for (int j = 0; j < size; j++)
        {   
            cout << i << " line " << j << " element :"; 
            cin >> arr[i][j];
        }
    }
    
	if (check(arr, size))
    {
        createTree(arr, size);
    }
    else
    {
        cout << "it is not tree\n";
    }
    return 0;
}