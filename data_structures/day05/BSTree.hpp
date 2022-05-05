#ifndef TREE_H
#define TREE_H
#include "node.h"
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Tree
{
    private: 
        void insert(Node* tmp, int data);
        int Min(Node* tmp);
        int Max(Node* tmp);
        Node* search(Node* tmp, int data);
    public:
        Node* _root;
        void insert(int data);
        void DFS (Node* tmp);
        void BFS ();
        int Min();
        int Max();
        void ByAscendingOrder(Node* tmp);
        Tree(int data);
        Node* search(int data);
        void remove(int data);
};

Tree::Tree(int data)
{
    _root = new Node(data);
}


void Tree::insert(Node* tmp, int data)
{
    Node* newNode = new Node(data);
    if (tmp == NULL)
    {
       tmp->_data = data;
    } 
    else
    {
        if (data < tmp->_data)
        {
            if (tmp->_left == NULL)
            {
                tmp->_left = newNode;
            }
            else
            {
                insert (tmp->_left, data);
            }
        }
        else
        {
            if (tmp->_right == NULL)
            {
                tmp->_right = newNode;
            }
            else
            {
                insert (tmp->_right, data);
            }
        }
    }
}

void Tree::insert(int data)
{
    insert(_root, data);
}

void Tree::DFS (Node* tmp)
{
    stack<Node*> stack;
    stack.push(tmp);
    if (!stack.empty())
    {
        cout << stack.top()->_data << " ";
        stack.pop();
    }
    if (tmp->_left != NULL)
    {
        DFS(tmp->_left);
    }
    if (tmp->_right != NULL)
    {
        DFS(tmp->_right);
    }
}

void Tree::BFS ()
{
    queue<Node*> queue;
    queue.push(_root);
    while (!queue.empty())
    {
      Node *tmp = queue.front();
      cout << tmp->_data << " ";
      queue.pop();
      if (tmp->_left != NULL)
          queue.push(tmp->_left);
      if (tmp->_right != NULL)
          queue.push(tmp->_right);
    }
}

int Tree::Min(Node* tmp)
{
    int min = tmp->_data;
    while (tmp->_left != NULL)
    {
        min = tmp->_left->_data;
    }
    return min;
}

int Tree::Max(Node* tmp)
{
    int max = tmp->_data;
    while (tmp->_right != NULL)
    {
        max = tmp->_right->_data;
    }
    return max;
}

int Tree::Min()
{
    return Min(_root);
}
int Tree::Max()
{
    return Max(_root);
}

void ByAscendingOrder(Node* tmp)
{
    stack<Node*> stack;
    stack.push(tmp);
    if (tmp->_left != NULL)
    {
        ByAscendingOrder(tmp->_left);
    }
    if (!stack.empty())
    {
        cout << stack.top()->_data << " ";
        stack.pop();
    }
    if (tmp->_right != NULL)
    {
        ByAscendingOrder(tmp->_right);
    }
}
Node* Tree::search(int data)
{
    return search(_root, data);
}

Node* Tree::search(Node* tmp, int data)
{
    if(tmp)
    {
        if (data < tmp->_data)
        {
            tmp = tmp->_left;
            search(tmp, data);
        }
        else if (data > tmp->_data)
        {
            tmp = tmp->_right;
            search(tmp, data);
        }
        return tmp;
    }
    return nullptr;
}
void Tree::remove(int data) 
{
    Node* tmp;
    Node* searchNode = search(data);
    if (data == searchNode->_data)
    {
        if (searchNode->_right != NULL)
        {
            tmp = searchNode->_right;
            if (tmp->_left == NULL)
            {
                searchNode->_data = tmp->_data;
                searchNode->_right = tmp->_right;
            }
            else
            {
                while (tmp->_left->_left != NULL)
                {
                    tmp = tmp->_left;
                }
                searchNode->_data = tmp->_left->_data;
                tmp->_left = NULL;
            }
        } 
        else if(searchNode->_left != NULL)
        {
            tmp = searchNode->_left;
            if (tmp->_right == NULL)
            {
                searchNode->_data = tmp->_data;
                searchNode->_left = tmp->_left;
            } 
            else
            {
                while (tmp->_right->_right != NULL)
                {
                    tmp = tmp->_right;
                }
                searchNode->_data = tmp->_right->_data;
                tmp->_right = NULL;
            }
        }
        else
        {
            searchNode = NULL;
        }
    }
}

#endif