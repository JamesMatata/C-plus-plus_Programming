//A Program to determine amount customers should pay after discount deduction from their bills.
#include<iostream>
using namespace std;
int main()
{
    float Bills,Amount_payable;
    cout<<"\nEnter total bills: sh";
    cin>>Bills;
    if(Bills>15000)
    {
        Amount_payable=(Bills*85)/100;
        cout<<"\n\nAmount payable is sh."<<Amount_payable;
    }
    else if(Bills>5000)
    {
        Amount_payable=(Bills*95)/100;
        cout<<"\n\nAmount payable is sh."<<Amount_payable;
    }
    else if((Bills>0)&&(Bills<=5000))
    {
        cout<<"\n\nThe customer does not qualify for a discount.\n\n";
    }
    else
    {
        cout<<"\n\nEnter valid bills amount.\n\n";
    }
    return 0;
}
