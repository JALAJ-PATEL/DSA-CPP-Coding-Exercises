/*
Q-5.
Given head which is a reference node to a singly-linked list. The value of each node in the
linked list is either 0 or 1 . The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list. [Leetcode 1290]
The most significant bit is at the head of the linked list.

Example 1:
Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10

Example 2:
Input: head = [0]
Output: 0

Constraints:
The Linked List is not empty.
Number of nodes will not exceed 30 .
Each node's value is either 0 or 1 .
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

int getDecimalValue(ListNode* head) {
    int num = 0;
    while (head != nullptr) {
        num = num * 2 + head->val;
        head = head->next;
    }
    return num;
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
    cout << "Decimal Value: " << getDecimalValue(head) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)