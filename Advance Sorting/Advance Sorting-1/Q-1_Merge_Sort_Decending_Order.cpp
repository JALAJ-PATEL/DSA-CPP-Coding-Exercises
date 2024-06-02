// Q-1. Given an array of integers, sort it in descending order using merge sort algorithm.

#include <bits/stdc++.h>
using namespace std;

// Function to perform merge sort
void mergeSort(int arr[], int l, int r){
    if(l>=r) return; // Base case: If the array has only one element or is empty, it is already sorted

    int mid = l+(r-l)/2; // Calculate the middle index

    // Recursively sort the left and right halves of the array
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    int n1 = mid-l+1, n2 = r-mid; // Calculate the sizes of the left and right subarrays
    int L[n1], R[n2]; // Create temporary arrays to store the left and right subarrays

    // Copy the elements from the original array to the left and right subarrays
    for(int i=0; i<n1; i++) L[i] = arr[l+i];
    for(int i=0; i<n2; i++) R[i] = arr[mid+1+i];

    int i=0, j=0, k=l; // Initialize the indices for merging

    // Merge the left and right subarrays in descending order
    while(i<n1 && j<n2){
        if(L[i]>=R[j]) arr[k++] = L[i++]; // If the current element in the left subarray is greater or equal, place it in the merged array
        else arr[k++] = R[j++]; // Otherwise, place the current element in the right subarray in the merged array
    }

    // Copy the remaining elements from the left and right subarrays to the merged array
    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) cin>>arr[i];

    mergeSort(arr, 0, n-1); // Call the merge sort function

    cout<<"Array after sorting in descending order: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}