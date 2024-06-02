/* 
Q-3. A function countAndSay is defined as:
countAndSay(1) = “1”
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is
then converted into a different digit string.
So, if sample input is n = 4,
countAndSay(1) = 1
countAndSay(2) = “one 1” => 11
countAndSay(3) = “two 1” => 21
countAndSay(4) = “one 2 one 1” => 1211 */

#include <bits/stdc++.h>
using namespace std;
string countAndSay(int n){
    if(n==1) return "1";
    string s = countAndSay(n-1);
    string res = "";
    int count = 1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]) count++;
        else{
            res += to_string(count)+s[i];
            count = 1;
        }
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"countAndSay("<<n<<"): "<<countAndSay(n);
    return 0;
}