/*Syntax;do
        {statement}
        while(condition)*/
//Example//
//A program to print numbers(1-1000) using while loop.//
#include<iostream>
using namespace std;
int main()
{
    int digit=1;
    do
    {
        cout<<digit<<" ";
        digit++;
    }
    while(digit<=1000);
    cout<<"\n\n######################################################THE END##########################################################\n\n";
    return 0;
}
