// Find the minimum value out of all elements in the array.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    // Input
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    // Minimum Value Logic
    int mini = INT_MAX;
    for(int i=1; i<n; i++)
    {
        mini = min(mini, arr[i]);
    }

    cout<<"Minimum Value in the Array : "<<mini;
    return 0;
}