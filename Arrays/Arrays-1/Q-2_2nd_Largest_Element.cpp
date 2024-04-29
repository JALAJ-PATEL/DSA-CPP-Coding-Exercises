// Find the second largest element in the given Array in one pass.

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
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    int mx = INT_MIN;
    int smx = INT_MIN;

    for(int i=1; i<=n;i++)
    {
        if(arr[i]>mx)
        {
            smx = mx;
            mx = arr[i];
        }
        else smx = max(smx, arr[i]);
    }
    cout<<"Largest No. : "<<mx<<endl;
    if(smx==INT_MIN) cout<<"No 2nd Largest Exist.";
    else cout<<"Second Largest No. "<<smx<<endl;
}