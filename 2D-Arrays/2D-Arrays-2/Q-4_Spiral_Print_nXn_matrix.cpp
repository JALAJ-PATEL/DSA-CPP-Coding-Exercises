// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
// Input 1: n = 3
// Output 1: [[1,2,3],[8,9,4],[7,6,5]]
// Input 2: n = 1
// Output 2: [[1]]

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cout << "Enter the size of the square matrix : ";
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int top = 0, bottom = n-1, left = 0, right = n-1;
    int count = 1;
    while(top <= bottom and left <= right){
        for(int i = left ; i <= right ; i++){
            a[top][i] = count++;
        }
        top++;
        for(int i = top ; i <= bottom ; i++){
            a[i][right] = count++;
        }
        right--;
        for(int i = right ; i >= left ; i--){
            a[bottom][i] = count++;
        }
        bottom--;
        for(int i = bottom ; i >= top ; i--){
            a[i][left] = count++;
        }
        left++;
    }
    cout << "The spiral matrix is as follows : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}