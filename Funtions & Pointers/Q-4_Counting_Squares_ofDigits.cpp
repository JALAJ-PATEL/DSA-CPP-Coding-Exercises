// Q4: Write a function to count the number of digits in a number and 
// then print the square of this number.

#include<iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
int countNumOfDigit(int num)
{
    int ans = 0;
    while(num > 0)
    {
        ans++;
        num /=10;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter the Digit : ";
    cin>>num;

    int NumOfDigit = countNumOfDigit(num);
    cout<<square(NumOfDigit)<<endl;
    return 0;
}