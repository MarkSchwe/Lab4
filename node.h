//contains the relevant information for node.h
#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class Node{
    public:
char lastName[20];
char firstName[20];
int idNumber;
Node *Next;
void printNode();
Node();
};


#endif
