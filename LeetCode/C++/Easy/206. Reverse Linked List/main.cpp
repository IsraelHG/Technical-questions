#include <iostream>
#include <fstream>
#include <string>
#include "singlylinkedlist.h"

using namespace std;


int main() {
    LinkedList list;

    ifstream inFile("input.txt");
    int input;
    while (inFile >> input) {
        list.push(input);
    }
    inFile.close();

    list.printList();
    list.reverse();
    list.printList();

    return 0;
}