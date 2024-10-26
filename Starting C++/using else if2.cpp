//Using else/if to calculate net salary.
#include<iostream>
using namespace std;
int main()
{
    int Salary,Net_payable_amount,Deductions;
    cout<<"Enter employees salary: sh";
    cin>>Salary;

        if(Salary>=20000)
        {
            Deductions=(Salary*7)/100;
            Net_payable_amount=Salary-Deductions;
            cout<<"\n\nNet payable amount is sh."<<Net_payable_amount<<"\n\n";
        }
        else if((Salary>=10000)&&(Salary<20000))
        {
            Deductions=1000;
            Net_payable_amount=Salary-Deductions;
            cout<<"\n\nNet payable amount is sh."<<Net_payable_amount<<"\n\n";
        }
        else if((Salary>0)&&(Salary<10000))
        {
            cout<<"\n\nThe employee does not qualify for deductions.\n\n";
        }
        else
        {
            cout<<"\n\nEnter valid employees salary.\n\n";
        }
        return 0;
}
