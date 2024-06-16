/*
Q-4.
There are n flights that are labeled from 1 to n .
You are given an array of flight bookings bookings , where bookings[i] = [firsti, lasti,
seatsi] represents a booking for flights firsti through lasti (inclusive) with seatsi
seats reserved for each flight in the range.
Return an array answer of length n , where answer[i] is the total number of seats reserved
for flight i . [Leetcode 1109]

Example 1:
Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
Output: [10,55,45,25,25]
Explanation:
Flight labels: 1 2 3 4 5
Booking 1 reserved: 10 10
Booking 2 reserved: 20 20
Booking 3 reserved: 25 25 25 25
Total seats: 10 55 45 25 25
Hence, answer = [10,55,45,25,25]

Example 2:
Input: bookings = [[1,2,10],[2,2,15]], n = 2
Output: [10,25]
Explanation:
Flight labels: 1 2
Booking 1 reserved: 10 10
Booking 2 reserved: 15
Total seats: 10 25
Hence, answer = [10,25]
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& a, int n) {
    vector<int>res(n,0);
    for(int i=0;i<a.size();i++){
        res[a[i][0] - 1] += a[i][2];
        if(a[i][1] < n)res[a[i][1]] -= a[i][2];
    }
    for(int i=1;i<n;i++){
        res[i] += res[i-1];
    }
    return res;
    }
};

int main(){
    int n;
    cout<<"Enter the number of flights: ";
    cin>>n;
    vector<vector<int>> bookings;
    cout<<"Enter the number of bookings: ";
    int m;
    cin>>m;
    cout<<"Enter the bookings: ";
    for(int i=0; i<m; i++){
        vector<int> temp(3);
        for(int j=0; j<3; j++){
            cin>>temp[j];
        }
        bookings.push_back(temp);
    }
    Solution ob;
    vector<int> ans = ob.corpFlightBookings(bookings, n);
    cout<<"The total number of seats reserved for each flight are: ";
    for(auto x: ans) cout<<x<<" ";
    return 0;
}   
// Time Complexity: O(n+m) where n is the number of flights and m is the number of bookings
// Space Complexity: O(n) for storing the result