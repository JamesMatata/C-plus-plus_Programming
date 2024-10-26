#include<iostream>
using namespace std;
int main()
{
    int n;
    for(int i=1;i<=5;i++)
    {
    cout<<"Enter the number:";
    cin>>n;
    }
    for(int i=1;i<=5;i++)
    {
        for(int c=1;c<=n;c++)
    {
        cout<<c<<"\n";
    }

    }

    return 0;
}
