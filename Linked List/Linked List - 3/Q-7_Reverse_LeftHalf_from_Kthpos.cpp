/*
Q-7.
Given the head of a linked list, reverse the nodes of the list k at a time, and return the
modified list. [Leetcode 25]
k is a positive integer and is less than or equal to the length of the linked list. If the number of
nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
You may not alter the values in the list's nodes, only nodes themselves may be changed.

Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]

Example 2:
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]

Constraints:
The number of nodes in the list is n .
1 <= k <= n <= 5000
0 <= Node.val <= 1000
*/

#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

ListNode* reverse(ListNode* begin, ListNode* end) {
    ListNode *prev = begin, *curr = begin->next, *first = curr;
    ListNode *next = nullptr;

    while (curr != end) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    begin->next = prev;
    first->next = curr;

    return first;
}

ListNode* reverseKGroup(ListNode* head, int k) {
    if (head == nullptr || k == 1) return head;

    // Dummy node initialization
    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *begin = dummy;
    int i = 0;

    // Traverse the list
    while (head) {
        i++;
        if (i % k == 0) {
            begin = reverse(begin, head->next);
            head = begin->next;
        } else {
            head = head->next;
        }
    }
    return dummy->next;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, k;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the values of nodes: ";
    int val;
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* temp = head;
    for (int i = 1; i < n; i++) {
        cin >> val;
        temp->next = new ListNode(val);
        temp = temp->next;
    }
    cout << "Enter the value of k: ";
    cin >> k;

    cout << "Original Linked List: ";
    printList(head);

    head = reverseKGroup(head, k);

    cout << "Linked List after reversing nodes k at a time: ";
    printList(head);

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)