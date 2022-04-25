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
    try
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
            throw 1;
        }
    }
    catch(int err)
    {
        cout << "Your index for function \"AddNode\" does not match the number of nodes in our list \n";
    }

}
void LinkedList::RemoveFront()
{
    try
    {
        if (_head != NULL)
        {
            --num;
            Node *tmp = new Node;
            tmp->_next = NULL;
            tmp = _head;
            _head = _head->_next;
            delete tmp;
        }
        else
        {
            throw 1;
        }
    }
    catch(int err)
    {
        cout << "Тhere are no nodes in the list \n"; 
    }
}

void LinkedList::RemoveBack()
{
    try
    {
        if (_head != NULL)
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
        else
        {
            throw 1;
        }
    }
    catch(int err)
    {
        cout << "Тhere are no nodes in the list \n"; 
    }
}

void LinkedList::RemoveNode (int index)
{
    try
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
                RemoveFront();
            }
            else
            {
                prev->_next = delNode->_next;
                delete delNode;
            }
        }
        else
        {
            throw 1;
        }
    }
    catch(int err)
    {
        cout << "Your index for function \"RemoveNode\" does not match the number of nodes in our list \n";

    }
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
    /*try
    {
        if (index >= 0 && index < num)
        {*/
            Node *tmp = new Node;
            tmp = _head;
            tmp->_next = _head->_next;
            for (int i = 0; i < index; ++i)
            {
                tmp = tmp->_next;
            }
            return tmp->_data;
        /*}
        throw 1;
    }
    catch(int err)
    {
        cout << "Your index for function \"GetElement\" does not match the number of nodes in our list \n";
    }
    return ?????;*/
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
