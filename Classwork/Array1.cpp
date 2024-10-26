//creating an array of size 10,reading the values
#include<iostream>
using namespace std;
int main()
{
    int numbers[10]={0};
    int sum=0,average,smallest,largest;
    //read data into the array
    cout<<"\nEnter 10 values\n";
    for(int i=0;i<10;i++)
    {
        cout<<"\n#"<<i+1<<"-";
        cin>>numbers[i];
        cout<<"\n";
    }
    //sum array values
    for(int i=0;i<10;i++)
        sum+=numbers[i];
    average=sum/10;
    largest=numbers[0];
    smallest=numbers[0];
    for(int i=1;i<10;i++)
    {
        if(numbers[i]<smallest)
            smallest=numbers[i];
        if(numbers[i]>largest)
            largest=numbers[i];
    }
    for(int i=0;i<10;i++)
        cout<<numbers[i]<<" , ";

    cout<<endl;
    cout<<"\nSum of values is: "<<sum<<endl;
    cout<<"\nAverage of the values: "<<average<<endl;
    cout<<"\nThe smallest value is: "<<smallest<<endl;
    cout<<"\nThe largest value is: "<<largest<<endl;
    cout<<"\n\n";
    return 0;
}
