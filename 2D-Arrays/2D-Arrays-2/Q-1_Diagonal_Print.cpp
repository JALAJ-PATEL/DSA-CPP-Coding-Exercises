// Q-1. Write a program to print the elements of both the diagonals in a square matrix.

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
    cout << "The elements of the diagonals are as follows : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == j or i+j == n-1){
                cout << a[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}