// Q-1. Write a program to calculate the sum of odd numbers between a and b (both inclusive) 
// using recursion.

#include <bits/stdc++.h>
using namespace std;
int findSum(int curr, int LastNum){
    if(curr>LastNum) return 0;
    if(curr%2!=0) return curr+findSum(curr+1, LastNum);
    return findSum(curr+1, LastNum);
}
int main(){
    int a, b;
    cout<<"Enter the starting number of range: ";
    cin>>a;
    cout<<"Enter the ending number of range: ";
    cin>>b;
    cout<<"Sum of Odd Numbers between "<<a<<" & "<<b<<" : "<<findSum(a, b);
    return 0;
}