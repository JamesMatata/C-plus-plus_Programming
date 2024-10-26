#include<iostream>
#include<string.h>
using namespace std;
int main()
{
     int account_number,KWH;
    double Total_bill;
    char code;
    string time;
    cout<<"\nEnter account number: ";
    cin>>account_number;
    cout<<"\n\nEnter user code: ";
    cin>>code;
    if(code=='R')
    {
        cout<<"\n\nEnter number of watts consumed per hour: ";
        cin>>KWH;
        Total_bill=500+(KWH*4.8);
        cout<<"\n\nBill is ksh."<<Total_bill;
    }
    else if(code=='C')
    {
        cout<<"\n\nEnter number of watts consumed per hour: ";
        cin>>KWH;
        if(KWH>=1000)
        {
            Total_bill=50000+(3.75*(KWH-1000));
            cout<<"\n\nTotal bill is ksh."<<Total_bill;
        }
        else
        cout<<"\n\nTotal Bill is ksh.50000";

    }
    else if(code=='I')
    {
        cout<<"\n\nEnter time of usage(peak or off_peak):";
        cin>>time;
        cout<<"\n\nEnter number of watts consumed per hour: ";
        cin>>KWH;
        if(time=="off_peak")
        {
            if(KWH>=1000)
            {
                Total_bill=68000+((KWH-1000)*5.6);
                cout<<"\n\nTotal bill is ksh."<<Total_bill;
            }
            else
                cout<<"\n\nTotal bill is ksh.68000";
        }
        else if(time=="peak")
        {
            if(KWH>=1000)
            {
                Total_bill=37000+((KWH-1000)*2.75);
                cout<<"\n\nTotal bill is ksh."<<Total_bill;
            }
            else
                cout<<"\n\nTotal bill is ksh.37000";
        }
        else
            cout<<"\n\nEnter valid usage user time(peak or off_peak)";

    }
    else
        cout<<"\n\nERROR OCCURED (*_*)..(*_*)........ENTER VALID DATA\n\n";
    cout<<"\n\n*******************THANK YOU FOR USING THE PROGRAM*************************\n\n";
    return 0;
}
