// Q-3. Check whether the given string is palindrome or not.

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int n = str.size();
    bool isPalindrome = true;
    for(int i = 0 ; i < n/2 ; i++){
        if(tolower(str[i]) != tolower(str[n-i-1])){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }
    return 0;
}