/*
Q-3.
Given an array where all its elements are sorted in increasing order except two swapped elements,
sort it in linear time. Assume there are no duplicates in the array.
Input: A[] = [3, 8, 6, 7, 5, 9, 10]
Output: A[] = [3, 5, 6, 7, 8, 9, 10]
*/

#include <bits/stdc++.h>
using namespace std;
void fixSwappedArray(vector<int>& arr) {
    int n = arr.size();
    int x = -1, y = -1;

    // Step 1: Identify the two indices where the order is violated
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            if (x == -1) {
                x = i;
            }
            y = i + 1;
        }
    }

    // Step 2: Swap the elements at these indices
    if (x != -1 && y != -1) {
        swap(arr[x], arr[y]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    fixSwappedArray(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}