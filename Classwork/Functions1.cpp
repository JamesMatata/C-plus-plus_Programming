#include<iostream>
using namespace std;
double add2(double x,double y)
{
    return(x+y);
}
int main()
{
    double x,y;
    cout<<"\nEnter 2 values: ";
    cin>>x>>y;
    cout<<add2(x,y);
    return 0;
}

