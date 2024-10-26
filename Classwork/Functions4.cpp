//a program that does not return a value.
#include<iostream>
using namespace std;
void add(int,int);
void subtract(int,int);
void multiply(int,int);
void divide(int,int);
void remainder(int,int);
int main()
{
    int a,b;
    char op;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"\nEnter the second number:";
    cin>>b;
    cout<<"\nEnter the operation:";
    cin>>op;
    cout<<"\n\n";
    if(op=='+')
        add(a,b);
    else if(op=='-')
        subtract(a,b);
    else if(op=='*')
        multiply(a,b);
    else if(op=='/')
        divide(a,b);
    else if(op=='%')
        remainder(a,b);
    else
        cout<<"\nInvalid input";
    return 0;
}
void add(int x,int y)
{
  cout<<"The sum of "<<x<<"and"<<y;
  cout<<"   "<<x+y<<endl;
}
void subtract(int x,int y)
{
  cout<<x<<" minus "<<y;
  cout<<"   "<<x-y<<endl;
}
void multiply(int x,int y)
{
  cout<<"The product of "<<x<<"and"<<y<<" is ";
  cout<<"   "<<x*y<<endl;
}
void divide(int x,int y)
{
  cout<<"The quotient of "<<x<<" divide by "<<y<<" is ";
  cout<<"   "<<x/y<<endl;
}
void remainder(int x,int y)
{
    cout<<x<<" divided by "<<y;
    cout<<" the remainder is "<<x%y<<endl;
}
