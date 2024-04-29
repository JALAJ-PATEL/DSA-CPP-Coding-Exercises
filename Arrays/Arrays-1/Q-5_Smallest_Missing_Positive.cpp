// Q-5 WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

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

    bool flag = false; // False --> No Missing Values
    for(int i=0; i<n; i++)
    {
        if(arr[i] != i+1)
        {
            flag = true;
            cout<<"Smallest Missing Positive Integer : "<<i+1;
            break;
        }
    }
    if(flag == false)
    {
    cout<<"There is NO missing Element";
    }
    return 0;
}