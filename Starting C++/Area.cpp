#include<iostream>
using namespace std;
int main()
{
    float Radius,Area,Perimeter;
    const float pie=3.142;
    cout<<"\nEnter radius:";
    cin>>Radius;
    {
        Area=pie*Radius*Radius;
        Perimeter=2*pie*Radius;
        cout<<"\n\nThe area of the circle is: "<<Area<<"\n\nPerimeter of the circle is:"<<Perimeter<<"\n\n";
        cout<<"\n\nTHANK YOU FOR USING THE PROGRAM\n\n";
    }
    return 0;
}
