#ifndef STACK_H
#define SRACK_H
#include "../LinkedList/linked_list.h"


class Stack
{
private:
        LinkedList _list;
public:
        void Push(int);
        int Pop();
        int Peek();
        bool IsEmpty();
};
#endif