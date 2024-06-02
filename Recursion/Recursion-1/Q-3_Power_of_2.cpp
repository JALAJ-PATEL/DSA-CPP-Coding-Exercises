// Q-3. Given a positive integer, return true if it is a power of 2.
// Otherwise return false.

#include <bits/stdc++.h>
using namespace std;
bool isPowerOf2(int n){
    if(n==1) return true;
    if(n%2!=0 || n==0) return false;
    return isPowerOf2(n/2);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n<<" is "<<(isPowerOf2(n)?"":"not ")<<"a power of 2.";
    return 0;
}