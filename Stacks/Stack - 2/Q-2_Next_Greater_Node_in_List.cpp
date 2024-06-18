/*
Q-2.
Next Greater Node in Linked List [Leetcode - 1019]
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

vector<int> nextLargerNodes(ListNode* head) {
    vector<int> res;
    stack<pair<int, int>> st;
    int i = 0;
    while (head) {
        res.push_back(0);
        while (!st.empty() && st.top().first < head->val) {
            res[st.top().second] = head->val;
            st.pop();
        }
        st.push({head->val, i++});
        head = head->next;
    }
    return res;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Input: 2 7 4 3 5
// Output: 7 0 5 5 0