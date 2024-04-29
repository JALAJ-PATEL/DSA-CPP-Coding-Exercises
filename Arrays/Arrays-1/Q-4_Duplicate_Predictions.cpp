// Q-4 : Given an array, predict if the array contains duplicates or not.

#include<iostream>
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

    bool flag = false; // False --> No Duplicates
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(arr[i]==arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==true) break;
    }
    if(flag==true) cout<<"Contains Duplicates";
    else cout<<"All Elements are Unique";
    return 0;
}