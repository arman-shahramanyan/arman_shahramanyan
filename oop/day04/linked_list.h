#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "node.h"

class LinkedList
{
	private:
		Node *_head, *_tail;
	public:
		LinkedList();
		void AddFront(int data);
		void AddBack(int data);
		void AddNode(int data, int index);
		void RemoveFront();
		void RemoveBack();
		void RemoveNode(int index);
		int GetElement(int index);
		int Count();
		void Print();
		~LinkedList();
};

#endif
