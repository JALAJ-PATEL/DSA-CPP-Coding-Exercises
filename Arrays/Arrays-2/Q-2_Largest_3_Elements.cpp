// Q-2. WAP to find the largest three elements in the array.

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
    cout<<"Enter the Numbers in an Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // Largest 3 Elements Logic
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third)
        {
            third = arr[i];
        }
    }
    cout<<"Largest 3 Elements in the Array : "<<first<<" "<<second<<" "<<third;
    return 0;
}