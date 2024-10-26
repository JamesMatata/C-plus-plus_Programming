//Clear string method
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"\nEnter your full name in capital letters: ";
    getline(cin,name);
    //To clear a string
    name.clear();
    cout<<"WELCOME";
    return 0;
}
