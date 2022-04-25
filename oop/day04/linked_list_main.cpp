#include <iostream>
#include "linked_list.h"

using namespace std;

int main()
{
    LinkedList a;
    /*a.Print();          //Call Print() function for print all nodes, but our list is empty
    a.AddNode(1, 0);    //Add head node 
    a.AddNode(32, 1);   //Add node after head node
    a.AddNode(50, 1);   //Add node after second node
    a.AddNode(18, 1);   //Add a node after second node and moved the second node to the third
    a.GetElement(3);    //Print node under index(3)
    a.Count();          //Print number of nodes in the list
    a.RemoveNode(4);    //Remove a node under index(4)
    a.Print();          //Print all nodes
    a.AddNode(79, 0);   //Add head node 
    a.AddNode(66, 3);   //Add node 
    a.Count();          //Print number of nodes in the list
    a.RemoveNode(3);    //Remove a node under index(3)
    a.Print();          //Print all nodes
    a.Count(); */         //Print number of nodes in the list
    a.AddFront(5);
    a.AddBack(88);
    a.AddBack(9);
    a.AddNode(15, 0);
    a.Print();
return 0;
}