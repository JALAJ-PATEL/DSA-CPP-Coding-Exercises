// Q-1. Count the number of elements strictly greater than x.

#include<iostream>
using namespace std;
int main()
{
    int n, x;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    // Input
    int arr[n];
    cout<<"Enter the Numbers in an Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the Value of x : ";
    cin>>x;

    // Count the Number of Elements Greater than x
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > x)
        {
            count++;
        }
    }

    cout<<"Number of Elements Greater than "<<x<<" : "<<count;
    return 0;
}