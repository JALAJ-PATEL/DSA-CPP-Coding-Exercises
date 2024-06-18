/*
Q-1.
You are given the head of a linked list. Delete the middle node, and return the head of the
modified linked list. [Leetcode 2095]
The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based
indexing, where ⌊x⌋ denotes the largest integer less than or equal to x .
For n = 1 , 2 , 3 , 4 , and 5 , the middle nodes are 0 , 1 , 1 , 2 , and 2 , respectively.
Example 1:

Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]
Explanation:
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node.
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

ListNode* deleteMiddleNode(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return nullptr;
    ListNode *slow = head, *fast = head, *prev = nullptr;
    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
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
    head = deleteMiddleNode(head);
    cout << "Modified Linked List: ";
    printList(head);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)