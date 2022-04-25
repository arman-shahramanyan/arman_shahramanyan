#include "stack.h"

void Stack::Push(int data)
{
    _list.AddBack(data);
}

int Stack::Peek()
{
    return _list.GetElement((_list.Count()) - 1);
}

int Stack::Pop()
{
    int value = Peek();
    _list.RemoveBack();
    return value;
}

bool Stack::IsEmpty()
{
    return _list.Count() == 0;
}

int main()
{
    return 0;
}