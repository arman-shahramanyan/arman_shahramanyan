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
        Node* _root;
        int Min(Node* tmp);
        int Max(Node* tmp);
    public:
        Tree()
        {
            _root->_left= NULL;
            _root->_right = NULL;
        }

        Tree(int data)
        {
            _root->_data = data;
        }
        void insert(Node* tmp, int data);
        void DFS (Node* tmp);
        void BFS (Node* tmp);
        int Min();
        int Max();
        void BortByAscendingOrder(Node* tmp);
};

void Tree::insert(Node* tmp, int data)
{

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
                tmp->_left = tmp;
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
                tmp->_right = tmp;
            }
            else
            {
                insert (tmp->_right, data);
            }
        }
    }
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

void Tree::BFS (Node* tmp)
{
    queue<Node*> queue;
    queue.push(tmp);
    while (queue.empty() == false)
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
    /*queue<Node*> queue;
    queue.push(tmp);
    while (queue.empty() == false)
    {
      Node* tmp = queue.front();
      if (min > tmp->_data)
      {
          min = tmp->_data;
      }
      queue.pop();
      if (tmp->_left != NULL)
          queue.push(tmp->_left);
      if (tmp->_right != NULL)
          queue.push(tmp->_right);
    }*/
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

void BortByAscendingOrder(Node* tmp)
{
    _root->BFS(tmp);
}

#endif