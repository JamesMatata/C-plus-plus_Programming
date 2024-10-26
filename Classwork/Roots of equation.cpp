#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,x1,x2,x;
    cout<<"\nEnter a : ";
    cin>>a;
    cout<<"\nEnter b : ";
    cin>>b;
    cout<<"\nEnter c : ";
    cin>>c;
    if((a==0)&&(b==0))
        cout<<"\n\nNo roots\n\n";
    else if(a==0)
    {
        x=-c/b;
        cout<<"\n\nRoot is : "<<x<<"\n\n";
    }
    else if(((b*b)-(4*a*c))/1==-((b*b)-(4*a*c)))
        cout<<"\n\nNo roots\n\n";
    else
    {
        x1=(b+sqrt((b*b)-(4*a*c)))/(2*a);
        x2=(b-sqrt((b*b)-(4*a*c)))/(2*a);
        cout<<"\n\nx1 = "<<x1<<"\nx2 = "<<x2<<"\n\n";
    }
    return 0;
}
