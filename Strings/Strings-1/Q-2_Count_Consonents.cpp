// Q-2. Input a string of length n and count all the consonants in the given string.

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int count = 0;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] != 'a' and str[i] != 'e' and str[i] != 'i' and str[i] != 'o' and str[i] != 'u'){
            count++;
        }
    }
    cout << "The number of consonants in the given string is : " << count << endl;
    return 0;
}