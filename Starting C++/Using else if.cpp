#include<iostream>
using namespace std;
int main()
{
    int Age;
    cout<<"Enter Age: ";
    cin>>Age;
    if(Age>=90)
    {
        cout<<"\n\nYou are too old to access this website****YOU MAY DIE\n\n";
    }
    else if((Age>=18)&&(Age<90))
    {
        cout<<"\n\nYou can access the website now*****YOU BETTER BE READY FOR WHAT YOU GONNA SEE AND HEAR\n\n";
    }
    else
        {
        cout<<"\n\nYou can not access the website now****GO STUDY MOTHERFUCKER\n\n";
    }
}
