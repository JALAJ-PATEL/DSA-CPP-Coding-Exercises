/*
Q-2.
You are given two linked lists: list1 and list2 of sizes n and m respectively.
Remove list1 's nodes from the ath node to the bth node, and put list2 in their place.
[Leetcode 1669]
The blue edges and nodes in the following figure indicate the result:

Build the result list and return its head.
Example 1:

Input: list1 = [0,1,2,3,4,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
Output: [0,1,2,1000000,1000001,1000002,5]
Explanation: We remove the nodes 3 and 4 and put the entire list2 in their place. The blue edges
and nodes in the above figure indicate the result.
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

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode *temp = list1;
    for(int i=1; i<a; i++) temp = temp->next;
    ListNode *temp2 = temp;
    for(int i=a; i<=b; i++) temp2 = temp2->next;
    temp->next = list2;
    while(temp->next != nullptr) temp = temp->next;
    temp->next = temp2->next;
    return list1;
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
    cout << "Enter the number of nodes in list1: ";
    cin >> n;
    cout << "Enter the values of nodes in list1: ";
    int val;
    cin >> val;
    ListNode* list1 = new ListNode(val);
    ListNode* temp = list1;
    for (int i = 1; i < n; i++) {
        cin >> val;
        temp->next = new ListNode(val);
        temp = temp->next;
    }
    cout << "Enter the values of a and b: ";
    int a, b;
    cin >> a >> b;
    int m;
    cout << "Enter the number of nodes in list2: ";
    cin >> m;
    cout << "Enter the values of nodes in list2: ";
    cin >> val;
    ListNode* list2 = new ListNode(val);
    temp = list2;
    for (int i = 1; i < m; i++) {
        cin >> val;
        temp->next = new ListNode(val);
        temp = temp->next;
    }
    ListNode* head = mergeInBetween(list1, a, b, list2);
    cout << "The new Linked List is: ";
    printList(head);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)