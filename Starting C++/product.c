#include<iostream>
using namespace std;
int main()
{
int sum=0,number;
cout<<"Enter a number\n";
cin>>number;
for(int i=2;i<=number;i++)
sum+=i;
cout<<"Sum="<<sum;
return 0;
}

