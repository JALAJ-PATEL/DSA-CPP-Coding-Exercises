// Q-2. Write a program to rotate the matrix by 90 degrees anti-clockwise.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the square matrix : ";
    cin >> n;
    int a[n][n];
    cout << "Enter the matrix : "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
        cin >> a[i][j];
        }
    }
    cout << "The rotated matrix is as follows : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << a[j][n-i-1] << " ";
        }
        cout << endl;
    }
    return 0;
}