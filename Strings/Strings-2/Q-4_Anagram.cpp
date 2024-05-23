// Q-4. Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}
int main(){
    string s, t;
    cout << "Enter the 1st strings : ";
    cin >> s;
    cout << "Enter the 2nd strings : ";
    cin >> t;
    if(isAnagram(s, t)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}