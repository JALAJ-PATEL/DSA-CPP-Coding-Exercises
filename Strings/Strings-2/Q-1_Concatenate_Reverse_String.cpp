// Q-1. Input a string and concatenate with its reverse string and print it.
// Input : str = "JalajPatel"
// Output : "JalajPatelletaPjalaJ"

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;
    string rev = str;
    reverse(rev.begin(), rev.end());
    cout << str + rev << endl;
    return 0;
}