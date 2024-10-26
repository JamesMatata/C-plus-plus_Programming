#include<iostream>
using namespace std;
int main()
{
    int num,i=1,n,sum,smallest,ccount=1,largest;
    cout<<"Enter n(number of positive # to input): ";
    cin>>n;
    cout<<"\n\n**************************INPUT POSITIVE NUMBERS***************************\n";
    cout<<"#- ";
    cin>>num;
    sum=num;
    largest=num;
    smallest=num;
    while((num>0)&&(i<n))
    {
        cout<<"#- ";
        cin>>num;
        i++;
        sum+=num;
        if(num>0)
        {
            ccount++;
            if(num<smallest)
                smallest=num;
            if(num>largest)
                largest=num;
        }
    }
    cout<<"\n\n******************************COMPUTATIONS***************************\n";
    cout<<"\nTotal number of #: "<<ccount;
    cout<<"\n\nSummation of #: "<<sum;
    cout<<"\n\nMinimum #: "<<smallest;
    cout<<"\n\nMaximum #: "<<largest;
    cout<<"\n\nAverage of #: "<<sum/ccount;
    cout<<"\n\n______________________________THANK YOU FOR USING THE PROGRAM______________________\n\n";
    return 0;
}
