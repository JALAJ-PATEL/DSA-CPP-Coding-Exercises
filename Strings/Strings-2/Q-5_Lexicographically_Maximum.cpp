// Q-5. Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be Indian"
// Output : to

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string lexicographicallyMaximum(string str){
    string word = "";
    string maxWord = "";
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] == ' '){
            if(word > maxWord){
                maxWord = word;
            }
            word = "";
        } else {
            word += str[i];
        }
    }
    if(word > maxWord){
        maxWord = word;
    }
    return maxWord;
}

int main(){
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    cout << "The lexicographically maximum word is : " << lexicographicallyMaximum(str) << endl;
    return 0;
}