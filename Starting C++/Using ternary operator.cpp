//A program to determine if a number is even or odd
#include<iostream>
using namespace std;
int main()
{
    int Number;
    cout<<"Enter number: ";
    cin>>Number;
    //Ternary operator(?:) is used instead of else/if statements
    //Condition? Expression 1:Expression 2;
    (Number%2==1)?cout<<"\n\nThe number is ODD\n\n":cout<<"\n\nThe number is EVEN\n\n";
    return 0;
}
