/*
Q-3
Given an array of integers nums and an integer k . A continuous subarray is called nice if there
are k odd numbers on it. [Leetcode 1248]
Return the number of nice sub-arrays.
Example 1:
Input: nums = [1,1,2,1,1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
Example 2:
Input: nums = [2,4,6], k = 1
Output: 0
Explanation: There is no odd numbers in the array.
Example 3:
Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
Output: 16
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> oddIdx;
        for(int i=0; i<n; i++){
            if(nums[i]%2 != 0) oddIdx.push_back(i);
        }
        int ans = 0;
        for(int i=0; i<oddIdx.size()-k+1; i++){
            int left = 0, right = 0;
            if(i == 0) left = oddIdx[i]+1;
            else left = oddIdx[i]-oddIdx[i-1];
            if(i+k-1 == oddIdx.size()-1) right = n-oddIdx[i+k-1];
            else right = oddIdx[i+k]-oddIdx[i+k-1];
            ans += left*right;
        }
        return ans;
    }
};

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) cin>>nums[i];
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    Solution ob;
    cout<<"The number of nice sub-arrays is: "<<ob.numberOfSubarrays(nums, k);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(n)