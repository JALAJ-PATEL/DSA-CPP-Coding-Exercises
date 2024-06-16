/*
Given an integer array nums , handle multiple queries of the following type:
Calculate the sum of the elements of nums between indices left and right inclusive where
left <= right .

Implement the NumArray class:
NumArray(int[] nums) Initializes the object with the integer array nums .
int sumRange(int left, int right) Returns the sum of the elements of nums between
indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... +
nums[right] ). [Leetcode 303]

Example 1:

Input
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]

Output
[null, 1, -1, -3]

Explanation
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3

*/

#include <bits/stdc++.h>
using namespace std;
class NumArray {
public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size()+1);
        prefixSum[0] = 0;
        for(int i=0; i<nums.size(); i++){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
    }
    int sumRange(int left, int right) {
        return prefixSum[right+1] - prefixSum[left];
    }
};
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) cin>>nums[i];
    NumArray numArray(nums);
    cout<<"Enter the range of indices: ";
    int left, right;
    cin>>left>>right;
    cout<<"The sum of elements between indices "<<left<<" and "<<right<<" is: "<<numArray.sumRange(left, right);
    return 0;
}
// Time Complexity: O(n) for constructor and O(1) for sumRange
// Space Complexity: O(n) for prefixSum array