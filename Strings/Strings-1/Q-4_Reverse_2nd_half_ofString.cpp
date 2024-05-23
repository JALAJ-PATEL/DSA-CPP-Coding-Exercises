// Q-4. Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int n = str.size();
    if(n % 2 != 0) {
        cout << "Invalid input." << endl;
    } else {
        reverse(str.begin() + n / 2, str.end());
        cout << str;
    }
}