// Q-3. Find the first non-repeating element in the array .

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

    // First Non-Repeating Element Logic
    int i;
    for(i=0; i<n; i++)
    {
        int j;
        for(j=0; j<n; j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                break;
            }
        }
        if(j==n)
        {
            cout<<"First Non-Repeating Element in the Array : "<<arr[i];
            break;
        }
    }
    if(i==n)
    {
        cout<<"No Non-Repeating Element in the Array";
    }
    return 0;
}