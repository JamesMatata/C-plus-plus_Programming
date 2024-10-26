#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"***************************************MMU SUPERMARKET RETAIL PRICE DETERMINER**************************************************\n";
    do
    {
        int wp,dy,rp;
        cout<<"\nEnter wholesale price of the item : sh";
        cin>>wp;
        cout<<"\n\nEnter number of days item is expected to sell : ";
        cin>>dy;
        if((dy>0)&&(dy<=7))
            {
                rp=wp*1.05;
                cout<<"\n\nRetail price is sh."<<rp;
            }
        else if(dy>7)
            {
                rp=wp*1.1;
                cout<<"\n\nRetail price is sh."<<rp;
            }
        else
        cout<<"\n\nEnter valid number of days!!!!!!\n";
        cout<<"\n\n__________**********__________*********__________**********__________*********__________**********";
        cout<<"\n\nEnter 1 if you want to continue and press any key if you want to exit : ";
        cin>>x;
    }
    while((x==1)&&(x>0));
    cout<<"\n\n***********************************************THANK YOU FOR USING THE PROGRAM**************************************************\n\n";
     return 0;

}
