#ifndef NODE_H
#define NODE_H
#include <iostream>
class Node
{
    public:
        int _data;
        Node* _left;
        Node* _right;
        Node() {
            _left = NULL;
            _right = NULL;
        }
        Node(int data) {
            _data = data;
        }
};

#endif