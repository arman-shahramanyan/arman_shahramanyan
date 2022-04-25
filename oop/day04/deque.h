#ifndef DEQUE_H
#define DEQUE_H
#include "linked_list.h"

class  Deque
{
private:
    LinkedList _list;
public:
    void PushFront(int);
    void PushBack(int);
    int PopFront();
    int PopBack();
    bool IsEmpty();
}; 

#endif