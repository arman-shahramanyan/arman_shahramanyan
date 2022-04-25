#include <iostream>
#include "linked_list.h"
using namespace std;

int num = 0;

LinkedList::LinkedList()
{
    _head = NULL;
    _tail = NULL;
}

void LinkedList::AddFront(int data)
{
    ++num;
    Node *tmp = new Node;
    tmp->_data = data;
    tmp->_next = NULL;
    if (_head == NULL)
    {
        _head = tmp;
        _tail = tmp;
    }
    else
    {
        tmp->_next = _head;
        _head = tmp;
    }
}

void LinkedList::AddBack(int data)
{
    ++num;
    Node *tmp = new Node;
    tmp->_data = data;
    tmp->_next = NULL;
    if (_head == NULL)
    {
        _head = tmp;
        _tail = tmp;
    }
    else
    {
        _tail->_next = tmp;
        _tail = tmp;
    }
}

void LinkedList::AddNode(int data, int index)
{
    if (index >= 0 && index < num)
    {
        ++num;
        Node *tmp = new Node;
        tmp->_data = data;
        tmp->_next = NULL;
        if (_head == NULL)
        {
            _head = tmp;
            _tail = tmp;
        }
        else
        {
            Node *prev = new Node;
            prev = _head;
            prev->_next = _head->_next;
            for (int i = 0; i < index; ++i)
            {
                prev = prev->_next;
            }
            tmp->_next = prev->_next;
            prev->_next = tmp;
        }
    }
    else
    {
        cout << "Your index for function \"AddNode\" does not match the number of nodes in our list \n";
    }
}
void LinkedList::RemoveFront()
{
    --num;
    Node *tmp = new Node;
    tmp->_next = NULL;
    tmp = _head;
    _head = _head->_next;
    delete tmp;
}

void LinkedList::RemoveBack()
{
    --num;
    Node *prev = new Node;
    prev = _head;
    prev->_next = _head->_next;
    for (int i = 0; i < num - 1; i++)
    {
        prev = prev->_next;
    }
   
    delete prev->_next;
    prev->_next = NULL;
    _tail = prev;
}

/*void LinkedList::RemoveNode (int index)
{   
    Node *tmp = new Node;
    tmp->_next = NULL;
    Node *delNode = new Node;
    if (_head == NULL)
    {
        cout << "Тhere are no nodes in the list \n";
    }
    else if (_head->_next != NULL && index > 0 && index < num)
    {
        --num;
        delNode = _head;
        delNode->_next = _head->_next;
        for (int i = 0; i < index; i++)
        {
            tmp = delNode;
            delNode = delNode->_next;            
        }
            tmp->_next = delNode->_next;
            delete delNode;
            cout << "Remove node at index " << index << endl;
    }
    else if (index == 0)
    {
        --num;
        delNode = _head;
        _head = _head->_next;
        delete delNode;
        cout << "Remove head node \n";
    }
    else
    {
        cout << "Your index for function \"RemoveNode\" does not match the number of nodes in our list \n";
    }
}*/

void LinkedList::Print()
{
    if (_head != NULL)
    {
        Node *print = new Node;
        print = _head;
        print->_next = _head->_next;
        for (int i = 1; i <= num; ++i)
        {
            cout << i << ". Node->Data = " << print->_data << endl;
            print = print->_next;
        }
        delete print;
    }
    else
    {
        cout << "Тhere are no nodes in the list \n";

    }
}

int LinkedList::Count()
{
    return num;
}

int LinkedList::GetElement (int index)
{
    if (index >= 0 && index < num)
    {
        Node *tmp = new Node;
        tmp = _head;
        tmp->_next = _head->_next;
        for (int i = 0; i < index; ++i)
        {
            tmp = tmp->_next;
        }
        return tmp->_data;
    }
    else
    {
        cout << "Your index for function \"GetElement\" does not match the number of nodes in our list \n";

    }
}

LinkedList::~LinkedList()
{
    for (int i = 0; i < num; i++)
    {
        RemoveFront();
    }
}
