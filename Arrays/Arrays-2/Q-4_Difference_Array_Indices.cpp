// Q-4. Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

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

    // Difference between the sum of elements at even indices to the sum of elements at odd indices
    int sum_even = 0, sum_odd = 0;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            sum_even += arr[i];
        }
        else
        {
            sum_odd += arr[i];
        }
    }

    cout<<"Difference between the sum of elements at even indices to the sum of elements at odd indices : "<<sum_even-sum_odd;
    return 0;
}