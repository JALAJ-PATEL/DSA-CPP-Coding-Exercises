/*
Q-5.
Find the length of loop in Cycle of Linked List.
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

int lengthOfCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return 0;
    ListNode *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }
    if (slow != fast) return 0;
    int length = 1;
    slow = slow->next;
    while (slow != fast) {
        slow = slow->next;
        length++;
    }
    return length;
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
    cout << "Enter the position of node to make cycle: ";
    int pos;
    cin >> pos;
    ListNode* cycle = head;
    while (pos--) cycle = cycle->next;
    temp->next = cycle;
    cout << "Length of cycle: " << lengthOfCycle(head) << endl;
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)