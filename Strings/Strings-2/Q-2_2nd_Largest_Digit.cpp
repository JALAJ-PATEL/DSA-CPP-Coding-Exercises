// Q-2. Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int n = str.size();
    int first = -1, second = -1;
    for(int i = 0 ; i < n ; i++){
        if(str[i] >= '0' and str[i] <= '9'){
            int digit = str[i] - '0';
            if(digit > first){
                second = first;
                first = digit;
            } else if(digit > second and digit != first){
                second = digit;
            }
        }
    }
    if(second == -1){
        cout << "No second largest digit found." << endl;
    } else {
        cout << "The second largest digit is : " << second << endl;
    }
    return 0;
}