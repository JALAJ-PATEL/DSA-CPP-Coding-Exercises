// Q-1. Count the number of triplets whose sum is equal to the given value x.

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

    // Count the Number of Triplets whose sum is equal to x
    int count = 0;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]+arr[k] == x)
                {
                    count++;
                }
            }
        }
    }

    cout<<"Number of Triplets whose sum is equal to "<<x<<" : "<<count;
    return 0;
}