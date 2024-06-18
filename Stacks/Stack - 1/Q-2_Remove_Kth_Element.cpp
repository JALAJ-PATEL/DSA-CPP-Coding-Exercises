/*
Q-2.
Remove kth element from top in a given stack.
Hint : Use another stack, just like insertion question.
*/

#include <bits/stdc++.h>
using namespace std;

void removeKthElement(stack<int> &s, int k) {
    stack<int> temp;
    while (k--) {
        temp.push(s.top());
        s.pop();
    }
    s.pop();
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> s;
    int n;
    cout << "Enter the number of elements in stack: ";
    cin >> n;
    cout << "Enter the elements of stack: ";
    int val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        s.push(val);
    }
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    removeKthElement(s, k);
    cout << "Stack after removing kth element: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)