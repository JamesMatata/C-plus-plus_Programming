#include<iostream>
using namespace std;
int main()
{
    float marks;
    char grade;
    cout<<"Enter students marks:\n";
    cin>>marks;
    if((marks>=0)&&(marks<=100))

    {
        if(marks>=70)
        grade='A';
    else if(marks>=60)
        grade='B';
    else if(marks>=50)
        grade='C';
    else if(marks>=40)
        grade='D';
    else
        grade='E';
    cout<<"\n\nGrade:\t"<<grade<<"\n\n";
    }
    else
        cout<<"\n\nInvalid input\n\n";
    return 0;
}
