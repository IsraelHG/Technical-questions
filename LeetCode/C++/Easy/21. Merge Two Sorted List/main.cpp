#include <string>
#include <cassert>
#include <fstream>
#include <sstream>
#include "mergeTwoSortedLists.h"

int main() {

    Solution object;
    ifstream inFile("input.txt");

    // Checks if file is open, else stops program.
    assert(inFile.is_open());
    
    string line;
    // Creates two pointers for each list
    ListNode* list1 = nullptr;
    ListNode* list2 = nullptr;

    // Read values from first line and add to list1
    getline(inFile, line);
    istringstream iss1(line);
    int num1;
    while (iss1 >> num1) {
        object.push(list1, num1);
    }

    // Read values from second line and add to list2
    getline(inFile, line);
    istringstream iss2(line);
    int num2;
    while (iss2 >> num2) {
        object.push(list2, num2);
    }

    inFile.close();

    cout << "list 1-> ";
    object.printList(list1);
    cout << "list 2-> ";
    object.printList(list2);

    // Merge the two lists, save the list to another pointer, and print the result
    ListNode* merged_list = object.mergeTwoLists(list1, list2);

    cout << "list 3-> ";
    object.printList(merged_list);

    return 0;
}