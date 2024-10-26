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
            cout<<"\n\nIt is January\n\n";
            break;
        case 2:
            cout<<"\n\nIt is February\n\n";
            break;
        case 3:
            cout<<"\n\nIt is March\n\n";
            break;
        case 4:
            cout<<"\n\nIt is April\n\n";
            break;
        case 5:
            cout<<"\n\nIt is May\n\n";
            break;
        case 6:
            cout<<"\n\nIt is June\n\n";
            break;
        case 7:
            cout<<"\n\nIt is July\n\n";
            break;
        case 8:
            cout<<"\n\nIt is August\n\n";
            break;
        case 9:
            cout<<"\n\nIt is September\n\n";
            break;
        case 10:
            cout<<"\n\nIt is October\n\n";
            break;
        case 11:
            cout<<"\n\nIt is November\n\n";
            break;
        case 12:
            cout<<"\n\nIt is December\n\n";
            break;
        default:
            cout<<"\n\nInvalid input\n\n";
    }
        return 0;
}
