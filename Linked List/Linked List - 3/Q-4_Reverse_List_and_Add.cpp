/*
Q-4.
You are given two non-empty linked lists representing two non-negative integers. The digits
are stored in reverse order, and each of their nodes contains a single digit. Add the two
numbers and return the sum as a linked list. [Leetcode 2]
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:
Input: l1 = [0], l2 = [0]
Output: [0]

Example 3:
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

Constraints:
The number of nodes in each linked list is in the range [1, 100] .
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.
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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *dummy = new ListNode(0), *temp = dummy;
    int carry = 0;
    while (l1 != nullptr || l2 != nullptr) {
        int sum = carry;
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }
        temp->next = new ListNode(sum % 10);
        carry = sum / 10;
        temp = temp->next;
    }
    if (carry > 0) temp->next = new ListNode(carry);
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
    cout << "Enter the number of nodes in first linked list: ";
    cin >> n;
    cout << "Enter the values of nodes: ";
    int val;
    cin >> val;
    ListNode* l1 = new ListNode(val);
    ListNode* temp = l1;
    for (int i = 1; i < n; i++) {
        cin >> val;
        temp->next = new ListNode(val);
        temp = temp->next;
    }
    cout << "Enter the number of nodes in second linked list: ";
    cin >> n;
    cout << "Enter the values of nodes: ";
    cin >> val;
    ListNode* l2 = new ListNode(val);
    temp = l2;
    for (int i = 1; i < n; i++) {
        cin >> val;
        temp->next = new ListNode(val);
        temp = temp->next;
    }
    ListNode* result = addTwoNumbers(l1, l2);
    cout << "Resultant linked list: ";
    printList(result);
    return 0;
}
// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m))