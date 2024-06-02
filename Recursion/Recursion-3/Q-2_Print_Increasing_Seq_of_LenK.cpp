// Q-2. Print all the increasing sequences of length k from first n natural numbers.

#include <bits/stdc++.h>
using namespace std;
void printSeq(int n, int k, int i, string ans){
    if(k==0){
        cout<<ans<<endl;
        return;
    }
    if(i>n) return;
    printSeq(n, k-1, i+1, ans+to_string(i)+" ");
    printSeq(n, k, i+1, ans);
}
int main(){
    int n, k;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of k: ";
    cin>>k;
    printSeq(n, k, 1, "");
    return 0;
}