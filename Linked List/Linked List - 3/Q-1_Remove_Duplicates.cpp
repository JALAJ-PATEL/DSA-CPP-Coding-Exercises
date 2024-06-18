/*
Q-1.
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving
only distinct numbers from the original list. Return the linked list sorted as well.
[Leetcode 82]
Example 1:
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]
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

ListNode* deleteDuplicates(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = dummy, *curr = head;
    while (curr != nullptr) {
        while (curr->next != nullptr && curr->val == curr->next->val) {
            curr = curr->next;
        }
        if (prev->next == curr) {
            prev = prev->next;
        } else {
            prev->next = curr->next;
        }
        curr = curr->next;
    }
    return dummy->next;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
    cout << "Original Linked List: ";
    printList(head);
    head = deleteDuplicates(head);
    cout << "Linked List after removing duplicates: ";
    printList(head);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)