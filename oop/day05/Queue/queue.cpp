#include "queue.h"

void Queue::Push(int data)
{
    _list.AddBack(data);
}

int Queue::Pop()
{
    int firstElem = _list.GetElement(0);
    _list.RemoveFront();
    return firstElem;
}

bool Queue::IsEmpty()
{
    return _list.Count() == 0;
}

int Queue::Front()
{
    return _list.GetElement(_list.Count() - 1);
}

int Queue::Back()
{
    return _list.GetElement(_list.Count() - 1);
}    
