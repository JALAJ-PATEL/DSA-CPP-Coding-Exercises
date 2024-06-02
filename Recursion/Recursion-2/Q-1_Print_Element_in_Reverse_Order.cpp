// Q-1. Print all the elements of an array in reverse order.

#include <bits/stdc++.h>
using namespace std;
void printReverse(int arr[], int n){
    if(n==0) return;
    cout<<arr[n-1]<<" ";
    printReverse(arr, n-1);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<"Elements of array in reverse order: ";
    printReverse(arr, n);
    return 0;
}