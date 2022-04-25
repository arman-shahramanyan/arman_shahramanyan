#include "deque.h"

void Deque::PushFront(int data)
{
    _list.AddFront(data);
}

void Deque::PushBack(int data)
{
    _list.AddBack(data);
}

int Deque::PopFront()
{
    int frontelem = _list.GetElement(0);
    _list.RemoveFront();
    return frontelem;
}

int Deque::PopBack()
{
    int backelem = _list.GetElement(_list.Count() - 1);
    _list.RemoveBack();
    return backelem;
}

bool Deque::IsEmpty()
{
    return _list.Count() == 0;
}
