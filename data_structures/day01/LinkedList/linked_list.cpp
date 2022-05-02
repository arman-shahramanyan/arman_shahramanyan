#include <iostream>
#include <exception>
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
        throw exception();
    }

}




void LinkedList::RemoveNode (int index)
{
    if (index >= 0 && index < num)
    {
        --num;
        Node *prev = new Node;
        Node *delNode = new Node;
        delNode = _head;
        for (int i = 0; i < index; i++)
        {
            prev = delNode;
            delNode = delNode->_next;
        }
        if (index == 0)
        {
            _head = _head->_next;
            delete delNode; 
        }
        else
        {
            prev->_next = delNode->_next;
            delete delNode;
        }
    }
    else
    {
        throw exception();
    }
}

void LinkedList::RemoveFront()
{
   RemoveNode (0);
}
void LinkedList::RemoveBack()
{
   RemoveNode (num - 1);
}

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
        throw exception();
    }  
}

LinkedList::~LinkedList()
{
    if(_head != NULL)
    {
        for (int i = 0; i < num; i++)
        {
            RemoveFront();
        }
    }
}
