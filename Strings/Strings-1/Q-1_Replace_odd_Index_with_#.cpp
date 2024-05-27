// Q-1. Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;
    for(int i = 0 ; i < str.size() ; i++){
        if(i%2 != 0){
            str[i] = '#';
        }
    }
    cout << "The updated string is : " << str << endl;
    return 0;
}