# 206. Reverse Linked List

Given the `head` of a singly linked list, reverse the list, and return *the reversed list*.

**Example 1:**

```
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
```

**Example 2:**

```
Input: head = [1,2]
Output: [2,1]
```

**Example 3:**

```
Input: head = []
Output: []
```
**Constraints:**

- The number of nodes in the list is the range `[0, 5000]`.
- `-5000 <= Node.val <= 5000`

# Solution

The `reverseList()` function takes a pointer to the head of a singly linked list as input, and returns a pointer to the head of the reversed linked list.

The function first initializes three pointers, `prev`, `curr`, and `next`, to `NULL`, the head of the linked list, and the next node in the list, respectively.

Then, it loops through the linked list, updating the pointers accordingly. At each iteration of the loop, the `next` pointer is updated to point to the next node in the original linked list. Then, the `curr` node's next pointer is updated to point to the `prev` node (effectively reversing the link direction), and the `prev` pointer is updated to point to the `curr` node. Finally, the `curr` pointer is updated to point to the `next` node, and the loop continues.

Once the end of the linked list is reached (i.e., `curr` becomes `NULL`), the `prev` pointer points to the head of the reversed linked list. Therefore, the function returns the `prev` pointer.

Here's a step-by-step breakdown of the `reverse` function:

Initialize three pointers `prev`, `curr`, and `next` to `NULL`, the head of the linked list, and the next node in the list, respectively.
Loop through the linked list, updating the pointers accordingly:

- Set `next` to `curr->next`
- Set `curr->next` to `prev`
- Set `prev` to `curr`
- Set `curr` to `next`

Once the end of the linked list is reached, return the `prev` pointer.