//header file that contains all the relevent functions and values.
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList{
private:
Node *listHead;
Node *createNode();
Node *searchLocation(int ID);

public:
LinkedList();
~LinkedList();
void insertNode();
void deleteNode(int ID);
void printList();
void searchNode();
};
#endif
