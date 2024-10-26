#include<iostream>
using namespace std;
int main()
{
    int sum=0,number;
    cout<<"\nEnter a number : ";
    cin>>number;
    for(int i=1; i<=number; i++)
        sum+=i;//sum+= means sum + number.
    cout<<"Sum = "<<sum<<"\n\n";
    return 0;
}
