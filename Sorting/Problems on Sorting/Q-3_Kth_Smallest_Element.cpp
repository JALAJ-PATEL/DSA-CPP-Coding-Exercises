// Q-3. Given an integer array and an integer k where k<=size of array, We need to return the kth
// smallest element of the array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    sort(arr.begin(), arr.end());
    cout << "The kth smallest element of the array is: " << arr[k-1];
    return 0;
}