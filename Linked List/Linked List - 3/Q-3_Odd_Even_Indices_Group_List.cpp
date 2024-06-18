/*
Q-3.
Given the head of a singly linked list, group all the nodes with odd indices together followed
by the nodes with even indices, and return the reordered list. [Leetcode 328]
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the
input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.

Example 1:

Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

Example 2:
Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]

Constraints:
The number of nodes in the linked list is in the range [0, 104] .
-1e6 <= Node.val <= 1e6
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

ListNode* oddEvenList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;
    ListNode *odd = head, *even = head->next, *evenHead = even;
    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
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
    head = oddEvenList(head);
    cout << "Linked List after grouping odd and even indices: ";
    printList(head);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)