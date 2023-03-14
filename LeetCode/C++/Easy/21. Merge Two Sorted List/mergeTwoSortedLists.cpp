#include "mergeTwoSortedLists.h"

using namespace std;

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2) {

    // Handle null input lists
    if (list1 == nullptr) { return list2; }
     else if (list2 == nullptr) { return list1; }

    // Create a new head pointer to hold the merged list
    ListNode* head = new ListNode(0);
    // Create a pointer to the merged list
    ListNode* tail = head;
    
    // Choose the smaller node of the two input lists as the head of the merged list
    if (list1 != nullptr && list2 == nullptr) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    
    // Update the pointers of the smaller node and the merged list until we reach the end of one of the input lists
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    
    // Append the remaining nodes of the other input list to the merged list
    if (list1 != nullptr) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }
    
    // Return the head of the merged list (excluding the dummy node)
    ListNode* mergedList = head->next;
    delete head;
    return mergedList;
}

void Solution::push(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);
    
    if (head == NULL ) {
        head = newNode;
    }
    else {
        ListNode* curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}


void Solution::printList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

