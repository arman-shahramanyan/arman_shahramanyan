#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "node.h"

class LinkedList
{
	private:
		Node *_head, *_tail, *_prev;
	public:
		LinkedList();
		void AddNode(int data, int index);
		void RemoveNode(int index);
		void GetElement(int index);
		void Count();
		void Print();
};

#endif
