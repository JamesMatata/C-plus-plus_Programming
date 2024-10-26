#include<iostream>
using namespace std;
double add2();
int main()
{
   cout<<add2();
   return 0;
}
double add2()
{
    double x,y;
    cout<<"\nEnter 2 values: ";
    cin>>x>>y;
    return(x+y);
}
