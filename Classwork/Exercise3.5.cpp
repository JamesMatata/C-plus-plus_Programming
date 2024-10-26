#include<iostream>
using namespace std;
int main()
{
   int num=1,square,cube,n;
   cout<<"\nEnter the number of the first integers to be squared and cubed: ";
   cin>>n;
   cout<<"\n**************************************************SQUARE AND CUBE OF THE INTEGERS**************************************************";
   cout<<"\nN";
   cout<<"\t\tSquare";
   cout<<"\t\tCube";
   while((num>=1)&&(num<=n))
   {
       cout<<"\n"<<num;
       square=num*num;
       cout<<"\t\t"<<square;
       cube=num*num*num;
       cout<<"\t\t"<<cube;
       cout<<"\n";
       num++;
   }
   cout<<"\n\n________________________   THANK YOU FOR USING THE PROGRAM  _____________________";
   cout<<"\n\n**********************************************************EXECUTION END********************************************************\n\n";
   return 0;

}
