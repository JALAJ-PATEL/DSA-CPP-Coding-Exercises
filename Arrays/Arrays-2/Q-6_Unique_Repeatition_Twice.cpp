// Q-6. Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    // Input
    int arr[n];
    cout<<"Enter the Numbers in an Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // Unique Number Logic
    int unique = 0;
    for(int i=0; i<n; i++)
    {
        unique = unique^arr[i];
    }

    cout<<"Unique Number in the Array : "<<unique;
    return 0;
}