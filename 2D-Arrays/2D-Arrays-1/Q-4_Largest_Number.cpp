// Q-4. Write a C++ program to find the largest element of a given 2D array of integers.

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
    int max = a[0][0];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    cout << "The largest element of the given 2D array is : " << max << endl;
    return 0;
}