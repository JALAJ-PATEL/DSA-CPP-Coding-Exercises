// Q-4. Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.

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
    int num1 = 0, num2 = 0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            num1 = num1*10 + arr[i];
        }
        else{
            num2 = num2*10 + arr[i];
        }
    }
    cout << "The minimum possible sum of two numbers formed from the array is: " << num1 + num2;
    return 0;
}