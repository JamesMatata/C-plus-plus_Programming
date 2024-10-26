//A program to calculate the area and perimeter of a rectangle
#include<iostream>
using namespace std;
int main()
{
    float Length,Width,Perimeter,Area;
    cout<<"\n Enter Length:";
    cin>>Length;
    cout<<"\n Enter Width:";
    cin>>Width;
    Area=Length*Width;
    Perimeter=2*(Length+Width);
    cout<<"\n\n Area="<<Area<<endl;
    cout<<"\n\n Perimeter="<<Perimeter<<endl;
    return 0;
}

