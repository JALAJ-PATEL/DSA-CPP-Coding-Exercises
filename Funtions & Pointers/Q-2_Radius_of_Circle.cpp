// Q2 : Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;
float areaOfCircle(float radius)
{
    return 3.14*radius*radius;
}
int main()
{
    float radius;
    cout<<"Enter the Radius of Circle : ";
    cin>>radius;
    cout<<"Area of Circle with Radius "<<radius<<" is : "<<areaOfCircle(radius)<<endl;
    return 0;
}