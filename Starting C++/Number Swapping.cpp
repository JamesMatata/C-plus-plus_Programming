//A program to swap two values
#include<iostream>
using namespace std;
int main()
{
    int x,y,Temp;
    cout<<"\nEnter value 1:";
    cin>>x;
    cout<<"\nEnter value 2:";
    cin>>y;
    cout<<"\nOriginal value of x and y\n"<<x<<","<<y;
    Temp=x;
    x=y;
    y=Temp;
    cout<<"\nNew values of x and y\n"<<x<<","<<y;
    return 0;
}

