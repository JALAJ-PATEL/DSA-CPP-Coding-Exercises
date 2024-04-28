// Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace  std;
int odd_num(int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        if(i%2 != 0) cout<<i<<" ";
    }
}
int main()
{
    int a, b;
    cout<<"Enter the 1st No. : ";
    cin>>a;
    cout<<"Enter the 2nd No. : ";
    cin>>b;
    odd_num(a+1, b-1);
    return 0;
}