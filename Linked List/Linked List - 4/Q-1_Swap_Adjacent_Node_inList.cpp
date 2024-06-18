/*
Q-1.

Given a linked list, swap every two adjacent nodes and return its head. You must solve the
problem without modifying the values in the list's nodes (i.e., only nodes themselves may be
changed.)

Example 1:
Input: head = [1,2,3,4]
Output: [2,1,4,3]

Example 2:
Input: head = []
Output: []

Example 3:
Input: head = [1]
Output: [1]

Constraints:
The number of nodes in the list is in the range [0, 100] .
0 <= Node.val <= 100
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

ListNode* swapPairs(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = dummy, *curr = head;
    while (curr != nullptr && curr->next != nullptr) {
        ListNode *temp = curr->next->next;
        prev->next = curr->next;
        curr->next->next = curr;
        curr->next = temp;
        prev = curr;
        curr = temp;
    }
    return dummy->next;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout <<endl;
}

int main() {
    int n;
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
    head = swapPairs(head);
    printList(head);
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)