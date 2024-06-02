/*
Q-3.
Given an integer array nums of length n where all the integers of nums are in the range [1,
n] and each integer appears once or twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.
Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:
Input: nums = [1,1,2]
Output: [1]
Example 3:
Input: nums = [1]
Output: []      */

#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &nums){
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        int index = abs(nums[i])-1;
        if(nums[index]<0) ans.push_back(index+1);
        nums[index] *= -1;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) cin>>nums[i];
    vector<int> ans = findDuplicates(nums);
    cout<<"The integers that appears twice: ";
    for(auto x: ans) cout<<x<<" ";
    return 0;
}