//Using switch to calculate net salary.
#include<iostream>
using namespace std;
int main()
{
    int Salary;
    float Net_payable_amount;
    cout<<"\n\nEnter employees salary: Ksh.";
    cin>>Salary;
            switch(Salary/10000)
            {
          case 0:
            Net_payable_amount=Salary;
            break;
          case 1:
            Net_payable_amount=Salary-1000;
            break;
          default:
            Net_payable_amount=Salary*0.93;
            {
            cout<<"\n\nNet salary Ksh."<<Net_payable_amount<<"\n\n";
            }
            }

        return 0;
}
