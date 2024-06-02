// Q-5. Check if the given array is almost sorted. (elements are at-most one position away).

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            count++;
        }
    }
    if(count <= 1){
        cout << "The array is almost sorted.";
    }
    else{
        cout << "The array is not almost sorted.";
    }
    return 0;
}