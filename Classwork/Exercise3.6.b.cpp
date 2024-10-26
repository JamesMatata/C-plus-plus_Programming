#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(c=1;c<=5;++c)
    {
        for(r=1;r<=c;++r)
            {
                cout<<"**";
            }
        cout<<endl;
    }
    for(c=5;((c<=5)&&(c>0));--c)
    {
        for(r=1;r<=c;++r)
            {
                cout<<"**";
            }
        cout<<endl;
    }
}
