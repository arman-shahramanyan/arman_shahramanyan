#ifndef QUEUE_H
#define QUEUE_H
#include "../LinkedList/linked_list.h"

class Queue
{
private:
    LinkedList _list;
public:
    void Push(int);
    int Pop();
    bool IsEmpty();
    int Front();
    int Back();
};
#endif