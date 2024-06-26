/* 
Q-2. Reverse Pairs (Leetcode Problem) : 
Given an integer array nums, return the number of reverse
pairs in the array.
A reverse pair is a pair (i, j) where:
0 <= i < j < nums.length and
nums[i] > 2 * nums[j]. */

#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted arrays and count the reverse pairs
int merge(vector<int> &nums, int low, int mid, int high){
    int count = 0;
    int j = mid+1;
    
    // Count the number of reverse pairs
    for(int i=low; i<=mid; i++){
        while(j<=high && nums[i]>2LL*nums[j]) j++;
        count += j-(mid+1);
    }
    
    // Merge the two sorted arrays
    vector<int> temp;
    int left = low, right = mid+1;
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]) temp.push_back(nums[left++]);
        else temp.push_back(nums[right++]);
    }
    while(left<=mid) temp.push_back(nums[left++]);
    while(right<=high) temp.push_back(nums[right++]);
    for(int i=low; i<=high; i++) nums[i] = temp[i-low];
    
    return count;
}

// Function to perform merge sort and count the reverse pairs
int mergeSort(vector<int> &nums, int low, int high){
    if(low>=high) return 0;
    int mid = low+(high-low)/2;
    
    // Recursively perform merge sort on left and right halves and count the reverse pairs
    int count = mergeSort(nums, low, mid)+mergeSort(nums, mid+1, high)+merge(nums, low, mid, high);
    
    return count;
}

// Function to calculate the number of reverse pairs in the array
int reversePairs(vector<int> &nums){
    return mergeSort(nums, 0, nums.size()-1);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) cin>>nums[i];
    cout<<"Number of reverse pairs in the array: "<<reversePairs(nums);
    return 0;
}