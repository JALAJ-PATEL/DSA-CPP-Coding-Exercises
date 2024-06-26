// Q-5. Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<string> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "The sorted array is: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}