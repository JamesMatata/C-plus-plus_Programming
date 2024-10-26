#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,x1,x2;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"\nEnter b: ";
    cin>>b;
    cout<<"\nEnter c: ";
    cin>>c;
    {
      x1=((-b+(sqrt((b*b)-(4*a*c))))/(2*a));
      x2=((-b-(sqrt((b*b)-(4*a*c))))/(2*a));
      cout<<"\n x1: "<<x1<<"\tx2: "<<x2;
      cout<<"\n\nTHANK YOU FOR USING THE PROGRAM\n\n";
    }
    return 0;
}
