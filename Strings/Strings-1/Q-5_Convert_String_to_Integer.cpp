// Q-5. Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int n = str.size();
    int num = 0;
    for(int i = 0 ; i < n ; i++){
        num = num * 10 + (str[i] - '0');
    }
    cout << "The integer is : " << num << endl;
    return 0;
}