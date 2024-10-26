#include<iostream>
using namespace std;
int main()
{
    int n,p,i=1,num=1;
    cout<<"\n************************************A PROGRAM TO CALCULATE VALUE OF n RAISE TO POWER p*********************************";
    cout<<"\n\nEnter value n: ";
    cin>>n;
    cout<<"\n\nEnter value p: ";
    cin>>p;
    while((p>0)&&(i<=p))
    {
       i++;
       num*=n;
    }
    cout<<"\n\n*******************************************************RESULTS***********************************************************";
    cout<<"\n\nn to power p= "<<num<<"\n\n";
    return 0;
}
