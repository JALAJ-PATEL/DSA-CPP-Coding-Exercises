// Q-3. Check if the given array is sorted or not.

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

    // Sorted or Not Logic
    bool flag = true;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"Array is Sorted";
    else cout<<"Array is Not Sorted";
    return 0;
}