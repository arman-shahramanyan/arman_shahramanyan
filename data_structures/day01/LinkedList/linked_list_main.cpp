#include <iostream>
#include "linked_list.h"

using namespace std;

int main()
{
    try 
    {
        LinkedList a;
        a.AddFront(5);
        a.AddBack(88);
        a.AddNode(9,1);
        a.AddNode(15, 0);
        a.Print();
        a.RemoveFront();
        a.Print();
        a.RemoveBack();
        a.Print();
        a.AddNode(3, 1);
        a.Print();
        cout << "Number of nodes in the list = " << a.Count() << endl;
        a.RemoveNode(2);
        a.RemoveNode(5); //for exception
        a.Print();
    }
    catch (exception err)
    {
        cout << "The index entered does not match the number of nodes in the list \n";
    }
return 0;
}
