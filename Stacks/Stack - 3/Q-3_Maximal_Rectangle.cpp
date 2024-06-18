/*
Q-3.
Maximal Rectangle [Leetcode - 85]
Given a 2D binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

Example:

Input:
[
  ["1","0","1","0","0"],
  ["1","0","1","1","1"],
  ["1","1","1","1","1"],
  ["1","0","0","1","0"]
]
*/

#include <bits/stdc++.h>
using namespace std;

int maximalRectangle(vector<vector<char>>& matrix) {
    if (matrix.empty()) return 0;
    
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> heights(m, 0);
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        // Update the heights array
        for (int j = 0; j < m; j++) {
            heights[j] = matrix[i][j] == '1' ? heights[j] + 1 : 0;
        }
        
        // Compute the maximum area in the histogram represented by heights
        stack<int> st;
        for (int j = 0; j <= m; j++) {
            while (!st.empty() && (j == m || heights[j] < heights[st.top()])) {
                int h = heights[st.top()];
                st.pop();
                int w = st.empty() ? j : j - st.top() - 1;
                maxArea = max(maxArea, h * w);
            }
            st.push(j);
        }
    }
    
    return maxArea;
}

int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    
    vector<vector<char>> matrix(n, vector<char>(m));
    cout << "Enter the elements of the matrix (0 or 1): " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Largest rectangle containing only 1's: " << maximalRectangle(matrix) << endl;
    
    return 0;
}

// Time Complexity: O(n * m)
// Space Complexity: O(m)