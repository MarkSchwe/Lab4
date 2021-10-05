#include "LinkedList.h"
#include "node.h"
#include <iostream>

LinkedList::LinkedList(){
    listHead = nullptr;
}


LinkedList::~LinkedList(){
Node *currNode = new Node();
while(listHead->Next != nullptr){
    currNode = listHead;
    while(listHead->Next != nullptr){
        currNode = currNode->Next;
    }
    delete currNode;
}
}


void LinkedList::insertNode(){
Node *A = createNode();
//A->Next = searchLocation(A->idNumber)->Next;
//searchLocation(A->idNumber)->Next = A;
}


void LinkedList::deleteNode(int ID){
Node *delNode = new Node();
if (searchLocation(ID) == nullptr){
    cout << "Student not found" << endl;
    return;
} else {
delNode = searchLocation(ID)->Next;
searchLocation(ID)->Next = delNode->Next;
delete delNode;
}
}

void LinkedList::printList(){
Node *currNode =  listHead->Next;
while (currNode != nullptr){
currNode->printNode();
currNode = currNode->Next;
}
}

void LinkedList::searchNode(){
int ID;
cout << "Input ID of student to search: ";
cin >> ID;
if(searchLocation(ID) == nullptr){
    cout << "Location not Found";
} else {
searchLocation(ID)->printNode();
}
}

Node *LinkedList::createNode(){
Node *newNode = new Node();
cout << "Input First Name:" << endl;
cin >> newNode->firstName;
cout << "Input Last Name: " << endl;
cin >> newNode->lastName;
cout << "Input Sudent ID: " << endl;
cin >> newNode->idNumber;
return newNode;
}

Node *LinkedList::searchLocation(int ID){
Node *SearchNode = new Node();
Node *prevNode = new Node();
if (!listHead){
    return nullptr;
}
if(listHead->idNumber == ID){
cout << "ID number is in first location" << endl;
return listHead;
} else {
SearchNode = listHead;
}
while (SearchNode->Next != nullptr && SearchNode->idNumber != ID){
prevNode = SearchNode;
SearchNode = SearchNode->Next;
}
if (SearchNode->Next == nullptr){
    return nullptr;
} else {
return prevNode;
}
}
