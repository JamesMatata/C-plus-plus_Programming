#include<iostream>
using namespace std;
int main()
{
    int Month;
    cout<<"Enter Month(1-12): ";
    cin>>Month;
    switch(Month)
    {
        case 1:
            cout<<"It is January";
            break;
        case 2:
            cout<<"It is February";
            break;
        case 3:
            cout<<"It is March";
            break;
        case 4:
            cout<<"It is April";
            break;
        case 5:
            cout<<"It is May";
            break;
        case 6:
            cout<<"It is June";
            break;
        case 7:
            cout<<"It is July";
            break;
        case 8:
            cout<<"It is August";
            break;
        case 9:
            cout<<"It is September";
            break;
        case 10:
            cout<<"It is October";
            break;
        case 11:
            cout<<"It is November";
            break;
        case 12:
            cout<<"It is December";
            break;
        default:
            cout<<"Invalid input";
    }
    return=0;
}
