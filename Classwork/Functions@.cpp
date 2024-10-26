#include<iostream>
using namespace std;
int leadingDigit(int);
int main()
{
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    leadingDigit(num);
    cout<<"The leading digit is "<<leadingDigit(num);
    return 0;
}
int leadingDigit(int n)
{
    int leading;
    while(n>0)
    {
        n=n/10;
        leading=n%10;
    }
    return leading;
}
