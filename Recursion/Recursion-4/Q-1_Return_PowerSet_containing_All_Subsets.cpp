// Q-1. Given an integer array containing unique numbers, return power set, containing all the subsets of the set.

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> powerSet(vector<int> &nums, int i){
    if(i==nums.size()){
        vector<vector<int>> res;
        res.push_back({});
        return res;
    }
    vector<vector<int>> res = powerSet(nums, i+1);
    vector<vector<int>> ans = res;
    for(auto v: res){
        v.push_back(nums[i]);
        ans.push_back(v);
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
    vector<vector<int>> res = powerSet(nums, 0);
    cout<<"Power set containing all subsets of the set: ";
    for(auto v: res){
        cout<<"{";
        for(auto x: v) cout<<x<<" ";
        cout<<"}";
    }
    return 0;
}