#include<iostream>
using namespace std;
int main()
{
    int Loudness;
    cout<<"Enter loudness in decibels: ";
    cin>>Loudness;
    if(Loudness>110)
        cout<<"\n\nUncomfortable\n\n";
    else if((Loudness>=91)&&(Loudness<=110))
        cout<<"\n\nVery annoying\n\n";
    else if((Loudness>=71)&&(Loudness<=90))
        cout<<"\n\nAnnoying\n\n";
    else if((Loudness>=51)&&(Loudness<=70))
        cout<<"\n\nIntrusive\n\n";
    else
        cout<<"\n\nQuiet\n\n";
    return 0;
}
