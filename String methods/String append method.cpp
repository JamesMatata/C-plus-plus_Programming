//String append method
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"\nEnter your full name in small letters: ";
    getline(cin,name);
    //To append a string
    name.append("@gmail.com");
    cout<<"\n\nYour username is now "<<name<<"\n\n";
    return 0;
}
