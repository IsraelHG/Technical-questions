#include "singlylinkedlist.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()  {
    head = tail = NULL;
}

void LinkedList::push(int value) {
    ListNode* newNode = new ListNode;
    newNode->value = value;
    newNode->next = nullptr;
    if (head == NULL && tail == NULL && head == tail) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}


void LinkedList::reverse() {
    ListNode* current = head;
    ListNode* prev = nullptr;
    ListNode* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    tail = head;
    head = prev;
}

void LinkedList::printList() {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
