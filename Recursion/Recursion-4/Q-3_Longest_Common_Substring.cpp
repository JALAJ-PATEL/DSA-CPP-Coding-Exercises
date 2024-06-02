// Q-3. Given a string, find the length of the longest common substring from two given strings.

#include <bits/stdc++.h>
using namespace std;
int longestCommonSubstring(string s1, string s2, int m, int n, int count){
    if(m==0 || n==0) return count;
    if(s1[m-1]==s2[n-1]) count = longestCommonSubstring(s1, s2, m-1, n-1, count+1);
    count = max(count, max(longestCommonSubstring(s1, s2, m-1, n, 0), longestCommonSubstring(s1, s2, m, n-1, 0)));
    return count;
}
int main(){
    string s1, s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;
    cout<<"Length of longest common substring: "<<longestCommonSubstring(s1, s2, s1.size(), s2.size(), 0);
    return 0;
}