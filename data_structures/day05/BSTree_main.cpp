#include "BSTree.hpp"

using namespace std;

int main()
{
    Tree tree;
    Node* tmp;
    tree.insert(tmp, 15);
    tree.insert(tmp, 10);
    tree.insert(tmp, 20);
    tree.insert(tmp, 11);
    tree.insert(tmp, 16);
    tree.DFS(tmp);
    cout << "\n----------\n";
    tree.BFS(tmp);
    cout << endl;
    cout << tree.Min()<< endl;
    return 0;
}
