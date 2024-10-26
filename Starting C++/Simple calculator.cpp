#include<iostream>
using namespace std;
int main()
{
    double x,y,Product,Sum,Division,Difference;
    char Operator;
    cout<<"*****************CALCULATOR******************";
    cout<<"\n\nEnter two values x,operator and y: ";
    cin>>x>>Operator>>y;
    if(Operator=='*')
    {
       Product=x*y;
       cout<<"\n\nproduct = "<<Product<<"\n\n";
    }
    else if(Operator=='/')
    {
        Division=x/y;
        cout<<"\n\nQuotient = "<<Division<<"\n\n";
    }
    else if(Operator=='-')
    {
       Difference=x-y;
       cout<<"\n\nDifference = "<<Difference<<"\n\n";
    }
    else if(Operator=='+')
    {
        Sum=x+y;
        cout<<"\n\nsum = "<<Sum<<"\n\n";
    }
    else
    {
        cout<<"\n\nInvalid input\n\n";
    }
    cout<<"\n\nTHANK YOU FOR USING THE PROGRAM\n\n";
    cout<<"\n##################################################\n";
        return 0;
}
