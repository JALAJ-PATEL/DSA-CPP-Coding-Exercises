// Q-5. Program to convert a decimal number to binary.

#include <bits/stdc++.h>
using namespace std;
void decToBin(int n){
    if(n==0) return;
    decToBin(n/2);
    cout<<n%2;
}
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    cout<<"Binary equivalent of "<<n<<" is: ";
    decToBin(n);
    return 0;
}