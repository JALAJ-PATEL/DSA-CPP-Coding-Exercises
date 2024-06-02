/*
Q-2.You have a set of integers s , which originally contains all the numbers from 1 to n .
Unfortunately, due to some error, one of the numbers in s got duplicated to another number in
the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of
an array. [Leetcode 645]
Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:
Input: nums = [1,1]
Output: [1,2]   */

#include <bits/stdc++.h>
using namespace std;
vector<int> findErrorNums(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(nums[abs(nums[i])-1]<0) ans.push_back(abs(nums[i]));
        else nums[abs(nums[i])-1] *= -1;
    }
    for(int i=0; i<n; i++){
        if(nums[i]>0) ans.push_back(i+1);
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
    vector<int> ans = findErrorNums(nums);
    cout<<"The number that occurs twice and the number that is missing: ";
    for(auto x: ans) cout<<x<<" ";
    return 0;
}