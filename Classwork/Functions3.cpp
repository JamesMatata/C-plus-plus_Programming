#include<iostream>
using namespace std;
int result;
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
    result=x+y;
  cout<<"The sum of "<<x<<"and"<<y;
  cout<<"   "<<result<<endl;
}
void subtract(int x,int y)
{
    result=x-y;
  cout<<x<<" minus "<<y;
  cout<<"   "<<result<<endl;
}
void multiply(int x,int y)
{
    result=x*y;
  cout<<"The product of "<<x<<"and"<<y<<" is ";
  cout<<"   "<<result<<endl;
}
void divide(int x,int y)
{
    result=x/y;
  cout<<"The quotient of "<<x<<" divide by "<<y<<" is ";
  cout<<"   "<<result<<endl;
}
void remainder(int x,int y)
{
    result=x%y;
    cout<<x<<" divided by "<<y;
    cout<<" the remainder is "<<result<<endl;
}

