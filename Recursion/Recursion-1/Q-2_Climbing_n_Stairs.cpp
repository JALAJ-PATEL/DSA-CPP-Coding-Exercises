// Q-2. Calculate the number of ways in which a person can climb n stairs if he can take exactly 
// 1, 2 or 3 steps at each level.

#include <bits/stdc++.h>
using namespace std;
int findWays(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    return findWays(n-1)+findWays(n-2)+findWays(n-3);
}
int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    cout<<"Number of ways to climb "<<n<<" stairs: "<<findWays(n);
    return 0;
}