#include<iostream>
using namespace std;
int main()
{
    int num=20,sum=20,product=20;
    while((num>=20)&&(num<=50))
    {
        num++;
        if(num%2==1)
        product*=num;
        else
        sum+=num;
    }
    cout<<"\n\nSummation even#: "<<sum;
    cout<<"\n\nproduct odd#: "<<product<<"\n\n";
    return 0;
}
