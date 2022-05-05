#include "BSTree.hpp"

using namespace std;

int main()
{
    Tree* tree = new Tree(15);
    tree->insert(10);
    tree->insert(20);
    tree->insert(11);
    tree->insert(16);
    tree->insert(14);
    tree->insert(9);
    tree->insert(22);
    tree->DFS(tree->_root);
    cout << "\n----------\n";
    tree->BFS();
    cout << endl;
    tree->remove(10);
    tree->BFS();
    cout << endl;
    //cout << tree->Min()<< endl;
    return 0;
}
