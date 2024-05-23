// Q-3. Write a program to print the matrix in wave form.

#include <iostream>
#include <vector>

using namespace std;

void printWaveForm(const vector<vector<int>>& matrix) {
    int n = matrix.size();

    for (int col = 0; col < n; ++col) {
        if (col % 2 == 0) {
            // Traverse from top to bottom
            for (int row = 0; row < n; ++row) {
                cout << matrix[row][col] << " ";
            }
        } else {
            // Traverse from bottom to top
            for (int row = n - 1; row >= 0; --row) {
                cout << matrix[row][col] << " ";
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    
    cout << "Enter the matrix: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix in wave form is: ";
    printWaveForm(matrix);

    return 0;
}
