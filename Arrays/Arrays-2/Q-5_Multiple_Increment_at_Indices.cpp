// Q-5. Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.

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

    // Change the value of all odd indexed elements to its second multiple
    // and increment all even indexed values by 10
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            arr[i] += 10;
        }
        else
        {
            arr[i] *= 2;
        }
    }

    cout<<"Array after changing the value of all odd indexed elements to its second multiple and incrementing all even indexed values by 10 : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}