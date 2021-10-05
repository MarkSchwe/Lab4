#include <iostream>
#include "node.h"
#include "LinkedList.h"
using namespace std;

int main(){
    LinkedList newList;
    //sentinel value that keeps the loop going until it equals 5
    int sentinel = 1;
    int ID;
    //while loop that continues the loop
    while(sentinel != 5){
        //loop that continues the loop as long as the input is between two specific numbers.
        while (sentinel > 0 && sentinel < 5){
        cout << "Menu options:" << endl << "1: Insert a node" << endl << "2: Delete a node" << endl << "3: Print List" << endl << "4: Search a Node" << endl << "5: Quit the program" << endl;
        cin >> sentinel;
        if (sentinel < 0 || sentinel > 5){
            cout << "Invalid input." << endl;
        }
            //inserts a node
        if (sentinel == 1){
            newList.insertNode();
        }
            //asks for an ID for a node then deletes it.
        if (sentinel == 2){
            cout << "Input ID to delete: ";
            cin >> ID;
            newList.deleteNode(ID);
        }
            //prints newList
        if (sentinel == 3){
            newList.printList();
        }
            //searches the nodes in newList
        if (sentinel == 4){
            newList.searchNode();
        }
            //ends the program
        if(sentinel == 5){
            return 0;
        }
        }
    }







    return 0;
}
