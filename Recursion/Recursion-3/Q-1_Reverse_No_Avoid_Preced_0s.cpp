// Q-1. Write a recursive function to reverse a number.
// Avoid preceding 0s in the reversed number.

#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n){
    if(n==0) return 0;
    return (n%10==0)?reverseNum(n/10):n%10*pow(10, (int)log10(n))+reverseNum(n/10);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is: "<<reverseNum(n);
    return 0;
}