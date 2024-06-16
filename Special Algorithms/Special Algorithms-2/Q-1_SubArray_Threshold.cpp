/*
Q-1.
Given an array of integers arr and two integers k and threshold , return the number of sub-
arrays of size k and average greater than or equal to threshold . [Leetcode 1343]

Example 1:
Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
Output: 3
Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively. All
other sub-arrays of size 3 have averages less than 4 (the threshold).
Example 2:
Input: arr = [11,13,17,23,29,31,7,5,2,3], k = 3, threshold = 5
Output: 6
Explanation: The first 6 sub-arrays of size 3 have averages greater than 5. Note that averages are
not integers.
*/

#include <bits/stdc++.h>
using namespace std;
int numOfSubarrays(vector<int> &arr, int k, int threshold){
    int sum = 0;
    for(int i=0; i<k; i++) sum += arr[i];
    int count = 0;
    if(sum/k >= threshold) count++;
    for(int i=k; i<arr.size(); i++){
        sum += arr[i] - arr[i-k];
        if(sum/k >= threshold) count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) cin>>arr[i];
    int k, threshold;
    cout<<"Enter the size of sub-array and threshold: ";
    cin>>k>>threshold;
    cout<<"The number of sub-arrays of size "<<k<<" and average greater than or equal to "<<threshold<<" is: "<<numOfSubarrays(arr, k, threshold);
    return 0;
}
// Time Complexity: O(n) for calculating sum and O(n) for finding sub-arrays
// Space Complexity: O(1)