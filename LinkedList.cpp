#include "LinkedList.h"
#include "node.h"
#include <iostream>
//constructor that sets the head as nullpointer
LinkedList::LinkedList(){
    listHead = nullptr;
}

//Destructor that deletes all elements of the list
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

//creates a node, initializes it to be the return value of createNode, and sets that as the given ID number
void LinkedList::insertNode(){
Node *A = createNode();
A->Next = searchLocation(A->idNumber)->Next;
searchLocation(A->idNumber)->Next = A;
}

//Deletes the node that has the ID that corresponds to ID
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

//prints all elements of  the linkedlist
void LinkedList::printList(){
Node *currNode =  listHead->Next;
while (currNode != nullptr){
currNode->printNode();
currNode = currNode->Next;
}
}

//searches the linkedlist for a node with the specific ID given by the keyboard
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

//creates a node and returns a pointer to said node
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

//searches the linkedlist looking for the node that has the ID given as a parameter
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
