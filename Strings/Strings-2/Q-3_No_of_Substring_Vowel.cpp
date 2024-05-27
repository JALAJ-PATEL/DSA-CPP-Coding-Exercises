// Q-3. Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int count = 0;
    int l = 0;
    for (int i = 0; i < (int)str.size(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            l++;
        } else {
            count += l * (l + 1) / 2;
            l = 0;
        }
    }
    count += l * (l + 1) / 2;
    cout << count;
    return 0;
}