// Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of the Array : ";
    cin>>n;

    cout<<"Enter the elements in the Array : ";
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    // Product of Elements
    int prod=1;
    for(int i=1; i<=n; i++)
    {
        prod = prod*arr[i];
    }
    cout<<"Product of all the Elements in the Array : "<<prod;
    return 0;
}