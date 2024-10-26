//Empty string method
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"\nEnter your full name in capital letters: ";
    getline(cin,name);
    //To return the length of name in character
    if(name.length()>=15)
        {
        cout<<"\n\nYour name should not exceed 15 characters.\n\n";
        }
    else
        {
        cout<<"\n\nWELCOM "<<name<<"\n\n";
        }
    return 0;
}
