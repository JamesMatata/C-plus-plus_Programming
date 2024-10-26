//Empty string method
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"\nEnter your full name in capital letters: ";
    getline(cin,name);
    //To return if a string is empty or not.
    if(name.empty())
    {
        cout<<"\n\nYou didn't enter your name.\n\n";
    }
    else
    {
        cout<<"\n\nWELCOM "<<name<<"\n\n";
    }
    return 0;
}
