// Q5: Write a program to print the row number having the maximum sum in a given matrix.

#include <iostream>
using namespace std;
int main(){
    int n , m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    int a[n][m];
    cout << "Enter the matrix : "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
        cin >> a[i][j];
        }
    }
    int max = 0;
    int row = 0;
    for(int i = 0 ; i < n ; i++){
        int sum = 0;
        for(int j = 0 ; j < m ; j++){
            sum += a[i][j];
        }
        if(sum > max){
            max = sum;
            row = i;
        }
    }
    cout << "The row number having the maximum sum is : " << row << endl;
    return 0;
}