//A function to swap the value of two variables.
//We use pass by parameter-is the copy of reference.
//declaring pointer variable.......datatype*identifier eg. int*y
#include<iostream>
using namespace std;
void exchange(int*x,int*y);
int main()
{
    int a,b;
    cout<<"Enter 2 numbers:\n";
    cin>>a>>b;
    cout<<"\nCurrent values:\n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
    exchange(&a,&b);
    cout<<"\nNew values:\n";
    cout<<"\na="<<a<<"\tb="<<b<<endl;
    return 0;
}
void exchange(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

