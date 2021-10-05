#include <iostream>
#include "node.h"
#include "LinkedList.h"
using namespace std;

int main(){
    LinkedList newList;
    int sentinel = 1;
    int ID;
    while(sentinel != 5){
        while (sentinel > 0 && sentinel < 5){
        cout << "Menu options:" << endl << "1: Insert a node" << endl << "2: Delete a node" << endl << "3: Print List" << endl << "4: Search a Node" << endl << "5: Quit the program" << endl;
        cin >> sentinel;
        if (sentinel < 0 || sentinel > 5){
            cout << "Invalid input." << endl;
        }
        if (sentinel == 1){
            newList.insertNode();
        }
        if (sentinel == 2){
            cout << "Input ID to delete: ";
            cin >> ID;
            newList.deleteNode(ID);
        }
        if (sentinel == 3){
            newList.printList();
        }
        if (sentinel == 4){
            newList.searchNode();
        }
        if(sentinel == 5){
            return 0;
        }
        }
    }







    return 0;
}
