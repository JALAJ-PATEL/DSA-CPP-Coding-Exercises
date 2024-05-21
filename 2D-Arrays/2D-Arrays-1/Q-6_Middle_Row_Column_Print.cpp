// Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.

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
    cout << "The elements of the middle row and middle column are as follows : "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
        if(i == n/2 or j == n/2)cout<<a[i][j]<<" ";
        }
    }
    return 0;
}