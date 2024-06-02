// Q-5. Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after
// replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted
// array. If no such integer exists that satisfies the above condition then return -1.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int k = -1;
    if(n%2 == 0){
        k = (arr[n/2] + arr[n/2 - 1])/2;
    }
    else{
        k = arr[n/2];
    }
    for(int i=0; i<n; i++){
        arr[i] = abs(arr[i] - k);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        if(arr[i] != i){
            cout << "-1";
            return 0;
        }
    }
    cout << k;
    return 0;
}