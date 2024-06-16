/*
Q-2.
The score of an array is defined as the product of its sum and its length.
For example, the score of [1, 2, 3, 4, 5] is (1 + 2 + 3 + 4 + 5) * 5 = 75 .
Given a positive integer array nums and an integer k , return the number of non-empty
subarrays of nums whose score is strictly less than k .
A subarray is a contiguous sequence of elements within an array. [Leetcode 2302]
Example 1:
Input: nums = [2,1,4,3,5], k = 10
Output: 6
Explanation:
The 6 subarrays having scores less than 10 are:
[2] with score 2 * 1 = 2.
[1] with score 1 * 1 = 1.
[4] with score 4 * 1 = 4.
[3] with score 3 * 1 = 3.
[5] with score 5 * 1 = 5.
[2,1] with score (2 + 1) * 2 = 6.
Note that subarrays such as [1,4] and [4,3,5] are not considered because their scores are 10 and
36 respectively, while we need scores strictly less than 10.

Example 2:
Input: nums = [1,1,1], k = 5
Output: 5
Explanation:
Every subarray except [1,1,1] has a score less than 5.
[1,1,1] has a score (1 + 1 + 1) * 3 = 9, which is greater than 5.
Thus, there are 5 subarrays having scores less than 5.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countSubarrays(vector<int>& a, long long k) {
        long long int i=0,j=0,sum=0,score=0,ans=0;
        long long int n = a.size();
        while(i < n and j < n){
            sum += a[j]; //window expansion
            score = sum*(j-i+1);
            while(i<=j and score >= k){
                //window contraction
                sum -= a[i++];
                score = sum*(j-i+1);
            }
            ans += (j-i+1);
            j++;
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
    long long k;
    cout<<"Enter the value of k: ";
    cin>>k;
    Solution ob;
    cout<<"The number of non-empty sub-arrays of nums whose score is strictly less than "<<k<<" is: "<<ob.countSubarrays(nums, k);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)