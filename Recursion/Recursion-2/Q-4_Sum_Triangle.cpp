/*
Q-4. Given an array of integers, print a sum triangle using recursion from it such that the first level
has all array elements. After that, at each level the number of elements is one less than the previous
level and elements at the level will be the sum of consecutive two elements in the previous level.
So, if sample input is [5, 4, 3, 2, 1], sample output will be:
[5, 4, 3, 2, 1]
[9, 7, 5, 3]
[16, 12, 8]
[28, 20]
[48] */

#include<bits/stdc++.h>
using namespace std;
void printSumTriangle(vector<int> arr) {
    // Base case: if the array has only one element, print it and return
    if (arr.size() == 1) {
        cout << "[" << arr[0] << "]";
        return;
    }

    // Create a temporary array to store sums of consecutive elements
    vector<int> temp;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        temp.push_back(arr[i] + arr[i + 1]);
    }

    // Recursively call printSumTriangle with the temporary array
    printSumTriangle(temp);

    // Print the current level after the recursive call
    cout << endl << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i != arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Sum triangle:\n ";
    printSumTriangle(arr);
    cout << endl;

    return 0;
}