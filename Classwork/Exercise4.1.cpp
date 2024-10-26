#include<iostream>
using namespace std;
int power();
int main()
{
 cout<<"Results are : "<<power();
 return 0;
}
int power()
    {
        int x,y;
        cout<<"Enter value of x : ";
        cin>>x;
        cout<<"\nEnter value of y : ";
        cin>>y;
        int i=1,result=1;
        while(i<=y)
        {
            i++;
            result*=x;
        }
        return(result);
    }
