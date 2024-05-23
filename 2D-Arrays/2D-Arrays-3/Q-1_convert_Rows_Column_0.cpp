// Q-1. Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//  Example
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1

#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int col0 = 1;
    for(int i=0;i<n;i++){
        if(matrix[i][0] == 0)col0 = 0;
        for(int j=1;j<m;j++){
            if(matrix[i][j] == 0){
            matrix[0][j] = 0;
            matrix[i][0] = 0;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=1;j--){
            if(matrix[0][j] == 0 || matrix[i][0] == 0){
                matrix[i][j] = 0;
            }
        }
        if(col0 == 0)matrix[i][0] = 0;
    }
}

int main(){
    int n,m;
    cout << "Enter the size of the matrix : ";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter the matrix : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> matrix[i][j];
        }
    }
    setZeroes(matrix);
    cout << "The matrix after setting zeroes is as follows : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
