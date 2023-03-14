#pragma once
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() {
        this->val = 0;
        this->next = nullptr;
    }
    ListNode(int x) {
        this->val = x;
        this->next = nullptr;
    }
    ListNode(int x, ListNode* next) {
        this->val = x;
        this->next = next;
    }
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
        void push(ListNode*& head, int x);
        void printList(ListNode* head);
};