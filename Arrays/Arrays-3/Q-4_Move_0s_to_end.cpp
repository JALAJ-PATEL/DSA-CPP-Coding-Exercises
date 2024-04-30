// Q-4. Move all zeros to the end of the array.

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

    // Move all Zeros to the End of the Array
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    while(count<n)
    {
        arr[count] = 0;
        count++;
    }

    // Output
    cout<<"Array after Moving all Zeros to the End : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}