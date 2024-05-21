// Q-2. Write a program to add two matrices and save the result in one of the given matrices.

#include <iostream>
using namespace std;
int main(){
    int n , m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    int a[n][m];
    cout << "Enter the first matrix : "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
        cin >> a[i][j];
        }
    }
    int b[n][m];
    cout << "Enter the second matrix : "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
        cin >> b[i][j];
        }
    }
    cout << "The sum of the two matrices is : "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
        a[i][j] = a[i][j] + b[i][j];
        cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
