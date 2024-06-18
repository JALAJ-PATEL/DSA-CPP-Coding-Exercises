/*
Q-2.
Given the head of a singly linked list, sort the list using insertion sort, and return the sorted
list's head. [Leetcode 147]

The steps of the insertion sort algorithm:

1. Insertion sort iterates, consuming one input element each repetition and growing a sorted
   output list.
2. At each iteration, insertion sort removes one element from the input data, finds the
   location it belongs within the sorted list and inserts it there.
3. It repeats until no input elements remain.
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

ListNode* insertionSortList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = head, *curr = head->next;
    while (curr != nullptr) {
        if (prev->val <= curr->val) {
            prev = prev->next;
        } else {
            ListNode *temp = dummy;
            while (temp->next->val <= curr->val) {
                temp = temp->next;
            }
            prev->next = curr->next;
            curr->next = temp->next;
            temp->next = curr;
        }
        curr = prev->next;
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
    head = insertionSortList(head);
    cout << "Modified Linked List: ";
    printList(head);
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)