// Q-4. Find the minimum operations required to sort the array in increasing order. In one operation ,
// you can set each occurrence of one element to 0.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != temp[i]){
            count++;
        }
    }
    cout << "The minimum operations required to sort the array in increasing order is: " << count;
    return 0;
}