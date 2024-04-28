// Write a program to find out the product of two numbers using pointers.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cout<<"Enter the 1st Number : " ;
    cin>>x;
    cout<<"Enter the 2nd Number : ";
    cin>>y;
    int *ptrX, *ptrY;
    ptrX = &x;
    ptrY = &y;
    int ans;
    int *ptrAns = &ans;
    *ptrAns = (*ptrX) * (*ptrY);
    cout << "Product using Pointers : " << *ptrAns << endl;
    return 0;
}