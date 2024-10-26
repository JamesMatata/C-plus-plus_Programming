#include<iostream>
using namespace std;
int main()
{
int sum=0,number,product=1;
cout<<"Enter a number : ";
cin>>number;
for(int i=1;i<=number;i++)
{
    if(i%2==0)
    sum+=i;
    else
    product*=i;
}
    cout<<"\n\nSum = "<<sum;
    cout<<"\n\nproduct = "<<product<<"\n\n";;
    return 0;
}

