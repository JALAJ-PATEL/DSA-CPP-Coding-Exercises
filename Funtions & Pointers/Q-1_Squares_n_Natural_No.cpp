// Write a function to print squares of first n natural numbers, 
// taking n as argument to the function

#include<iostream>
using namespace std;
int sqr(int num)
{
    return num*num;
}
void nSquareNo(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<i<<"*"<<i<<"="<<sqr(i)<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the Digit till which You want Sqaures : ";
    cin>>n;
    nSquareNo(n);
    return 0;
}