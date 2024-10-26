#include<iostream>
using namespace std;
int main()
{
    float radius,pie=3.142,Volume,Surface_area,t=1.333333;
    cout<<"\nEnter radius:";
    cin>>radius;
    Volume=t*pie*radius*radius*radius;
    Surface_area=4*pie*radius*radius;
    cout<<"\nVolume of sphere:"<<Volume<<"\n\nSurface area of sphere:"<<Surface_area;
    cout<<"\n\nTHANK YOU FOR USING THE PROGRAM\n";
    return 0;
}
