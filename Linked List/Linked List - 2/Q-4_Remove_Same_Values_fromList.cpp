/*
Q-4.
Given the head of a linked list and an integer val , remove all the nodes of the linked list that has
Node.val == val , and return the new head.
Example 1:

Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Example 2:
Input: head = [], val = 1
Output: []
Example 3:
Input: head = [7,7,7,7], val = 7
Output: []
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

ListNode* removeElements(ListNode* head, int val) {
    ListNode *temp = head;
    while(temp != nullptr && temp->val == val) temp = temp->next;
    head = temp;
    while(temp != nullptr && temp->next != nullptr){
        if(temp->next->val == val) temp->next = temp->next->next;
        else temp = temp->next;
    }
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
    cout << "Enter the value to remove: ";
    int value;
    cin >> value;
    cout << "Original Linked List: ";
    printList(head);
    head = removeElements(head, value);
    cout << "Linked List after removing " << value << ": ";
    printList(head);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)