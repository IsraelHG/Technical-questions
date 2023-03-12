#pragma once

class LinkedList {
    private:
        struct ListNode {
            int value;
            ListNode* next;
        };
        ListNode* head;
        ListNode* tail;

    public:
        LinkedList();
        void push(int value);
        void reverse();
        void printList();
};
