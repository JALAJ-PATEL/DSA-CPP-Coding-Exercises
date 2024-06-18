/*
Q-3.
You are given the head of a linked list, and an integer k .
Return the head of the linked list after swapping the values of the kth node from the beginning
and the kth node from the end (the list is 1-indexed). [Leetcode 1721]
Example 1:

Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]
Example 2:
Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
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

ListNode* swapNodes(ListNode* head, int k) {
    ListNode *temp = head;
    int n = 0;
    while(temp != nullptr){
        n++;
        temp = temp->next;
    }
    if(n == 1) return head;
    if(k == n-k+1) return head;
    ListNode *temp1 = head, *temp2 = head;
    for(int i=1; i<k; i++) temp1 = temp1->next;
    for(int i=1; i<n-k+1; i++) temp2 = temp2->next;
    swap(temp1->val, temp2->val);
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
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    head = swapNodes(head, k);
    cout << "Linked List after swapping nodes: ";
    printList(head);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)