/*
Given two sorted arrays A and B, generate all possible arrays such that the first element is taken
from A then from B then from A, and so on in increasing order till the arrays are exhausted. The
generated arrays should end with an element from B.
A = {10, 15, 25}
B = {1, 5, 20, 30}
Output: {10 20}, {10 20 25 30}, {10 30}, 
{15 20}, {15 20 25 30}, {15 30}, {25 30} */

#include <bits/stdc++.h>
using namespace std;
void generateAlternateArrays(int A[], int B[], int n, int m, int i, int j, bool flag, vector<int>& ans) {
    if (flag) {
        // If flag is true, pick from A and then switch to B
        for (int k = i; k < n; ++k) {
            if (ans.empty() || ans.back() < A[k]) {
                ans.push_back(A[k]);
                generateAlternateArrays(A, B, n, m, k + 1, j, !flag, ans);
                ans.pop_back();
            }
        }
    } else {
        // If flag is false, pick from B and then switch to A
        for (int l = j; l < m; ++l) {
            if (ans.back() < B[l]) {
                ans.push_back(B[l]);
                // Print the array when an element from B is added
                for (int x : ans) cout << x << " ";
                cout << endl;
                generateAlternateArrays(A, B, n, m, i, l + 1, !flag, ans);
                ans.pop_back();
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter the size of array A: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements of array A: ";
    for (int i = 0; i < n; ++i) cin >> A[i];

    cout << "Enter the size of array B: ";
    cin >> m;
    int B[m];
    cout << "Enter the elements of array B: ";
    for (int i = 0; i < m; ++i) cin >> B[i];

    vector<int> ans;
    generateAlternateArrays(A, B, n, m, 0, 0, true, ans);

    return 0;
}