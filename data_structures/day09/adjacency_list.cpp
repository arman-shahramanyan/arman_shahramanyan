#include <iostream>
#include "../day01/LinkedList/linked_list.h"

using namespace std;

class Graph {
    private:
        LinkedList* _arr;
        int _size;
        void remove(int, int);
    public:
        Graph(int);
        int getSize();
        void addEdge(int, int);
        void removeEdge(int, int);
        void addNode();
        void removeNode(int);
        bool isEdgeExists(int, int);
        void findNeighbours(int);
        void printAdjList();
};

Graph::Graph(int size)
{
    _size = size;
    _arr = new LinkedList[_size];
    for (int i = 0; i < _size; i++)
    {
        _arr[i].AddBack(i);
    }
}

void Graph::addEdge(int i, int j)
{
    _arr[i].AddBack(j);
    _arr[j].AddBack(i);
}

void Graph::addNode()
{
    _size++;
    LinkedList* newArr = new LinkedList[_size];
    for (int i = 0; i < _size - 1; i++)
    {
        newArr[i] = _arr[i];
    }
    _arr = newArr;
    _arr[_size - 1].AddBack(_size - 1);


}

void Graph::remove(int i, int j)
{
    Node* tmp = _arr[i]._head;
    int index = 0;
    while(tmp != NULL)
    {
        if (tmp->_data == j)
        {
            _arr[i].RemoveNode(index);
            break;
        }
        index++;
        tmp = tmp->_next;
    }
}

void Graph::removeEdge(int i, int j)
{
    remove(i, j);
    remove(j, i);
}

void Graph::removeNode(int index)
{
    LinkedList* newArr = new LinkedList[_size - 1];
    int j = 0;
    for (int i = 0; i < _size; i++)
    {
        if (_arr[i]._head->_data == index) continue;
        newArr[j] = _arr[i];
        remove(i, index);
        j++;
    }
    _arr = newArr;
    _size--;
}

bool Graph::isEdgeExists(int x, int y)
{
    Node* tmp = _arr[x]._head;
    for (int i = 0; i < _size; i++)
    {
        if(tmp->_data == y) return true;
        tmp = tmp->_next;
    }
    return false;
}

void Graph::findNeighbours(int index)
{
    Node* tmp = _arr[index]._head;
    if (_arr[index]._head->_next == NULL)
    {
        cout << "No Neighbours \n";
    }
    else
    {
        cout << "Neighbours of " << index << " -> ";
        while (tmp->_next != NULL)
        {
            tmp = tmp->_next;
            cout << tmp->_data << " ";
        }
    }
}

void Graph::printAdjList()
{
    Node* tmp;
    for (int i = 0; i < _size; i++)
    {
        tmp = _arr[i]._head;
        while (tmp != NULL)
        {
            cout << tmp->_data;
            if(tmp->_next != NULL)
            {
                cout << "->";
            }
            tmp = tmp->_next;
        }
        cout << endl;
    }
    
}

int main()
{
    Graph a(3);
    a.addEdge(0, 1);
    a.addEdge(0, 2);
    a.addEdge(1, 2);
    a.printAdjList();
    a.findNeighbours(0);
    cout << "\n\n";
    a.addNode();
    a.addEdge(0, 3);
    a.printAdjList();
    cout << endl;
    a.removeEdge(0, 2);
    a.printAdjList();
    cout << endl;
    a.removeNode(1);
    a.printAdjList();


    return 0;
}