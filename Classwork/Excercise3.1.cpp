#include<iostream>
using namespace std;
int main()
{
    int i=1,n,num=1;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"********************ENTER ONLY POSITIVE NUMBERS**********************";
    while((num>0)&&(i<=n))
    {
        cout<<"\n#- ";
        cin>>num;
        i++;

    }
    return 0;
}
