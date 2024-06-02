// Q-2. Print index of a given element in an array. 
// If not present, print -1.

#include <bits/stdc++.h>
using namespace std;
int findIndex(int arr[], int n, int x, int i){
    if(i==n) return -1;
    if(arr[i]==x) return i;
    return findIndex(arr, n, x, i+1);
}
int main(){
    int n, x;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<"Enter the element to find: ";
    cin>>x;
    cout<<"Index of "<<x<<" in array: "<<findIndex(arr, n, x, 0);
    return 0;
}