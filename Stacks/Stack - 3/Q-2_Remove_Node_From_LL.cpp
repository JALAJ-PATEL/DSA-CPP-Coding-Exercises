/*
Q-2.
Remove Nodes from a Linked List [Leetcode - 2487]

You are given the head of a linked list.
Remove every node which has a node with a greater value anywhere to the right side of it.
Return the head of the modified linked list.

Example 1:
Input: head = [5,2,13,3,8]
Output: [13,8]
Explanation: The nodes that should be removed are 5, 2 and 3.
- Node 13 is to the right of node 5.
- Node 13 is to the right of node 2.
- Node 8 is to the right of node 3.

Example 2:
Input: head = [1,1,1,1]
Output: [1,1,1,1]
Explanation: Every node has value 1, so no nodes are removed.
 
Constraints:
The number of the nodes in the given list is in the range [1, 105].
1 <= Node.val <= 10^5
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

ListNode* removeNodes(ListNode* head) {
    stack<int> st;
    ListNode* temp = head;
    while (temp) {
        st.push(temp->val);
        temp = temp->next;
    }
    ListNode* newHead = nullptr;
    while (!st.empty()) {
        if (!newHead || st.top() >= newHead->val) {
            ListNode* node = new ListNode(st.top());
            node->next = newHead;
            newHead = node;
        }
        st.pop();
    }
    return newHead;
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

    cout << "Enter the nodes: ";
    ListNode* head = nullptr;
    ListNode* temp = nullptr;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (!head) {
            head = new ListNode(val);
            temp = head;
        } else {
            temp->next = new ListNode(val);
            temp = temp->next;
        }
    }

    cout << "Original list: ";
    printList(head);

    ListNode* newHead = removeNodes(head);
    cout << "Modified list: ";
    printList(newHead);

    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)