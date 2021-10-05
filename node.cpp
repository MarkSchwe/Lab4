
#include <iostream>
#include "node.h"
using namespace std;
//constructor for the node
Node::Node(){}

//function that prints the firstname, lastname, and id number of the node.
void Node::printNode(){
cout << "Student First Name: " << firstName << endl;
cout << "Student Last Name: " << lastName << endl;
cout << "Student ID: " << idNumber << endl;


}
