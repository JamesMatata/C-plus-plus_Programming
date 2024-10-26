//Doing example array1 using funtions.
#include<iostream>
using namespace std;
//#define int arraysize 10;
const int arraysize=10;
void readArray(int[],int);
void printArray(int[],int);
int calcMean(int[],int);
int smallestValue(int[],int);
int largestValue(int[],int);
int main()
{
    int numbers[10];
    readArray(numbers,arraysize);
    printArray(numbers,arraysize);
    cout<<"Average value: ";
    cout<<calcMean(numbers,arraysize);
    cout<<endl;
    cout<<"smallest value: ";
    cout<<smallestValue(numbers,arraysize);
    cout<<endl;
    cout<<"Largest value: ";
    cout<<largestValue(numbers,arraysize);
    cout<<endl;
    int sum=0,average,smallest,largest;
    return 0;
}
void readArray(int x[],int y)
{
    for(int i=0;i<y;i++)
    {
        cout<<"\n#"<<i+1<<"-";
        cin>>x[i];
    }
    cout<<endl;
}
void printArray(int x[],int y)
{
    for(int i=0;i<y;i++)
    cout<<x[i]<<",";
    cout<<endl;
}
int calcMean(int x[],int y)
{
    int sum=0;
    for(int i=0;i<y;i++)
        sum+=x[i];
    return sum/y;
}
int smallestValue(int x[],int y)
{
    int smallest=x[0];
    for(int i=1;i<y;i++)
        {
            if(x[i]<smallest)
            smallest=x[i];
        }
    return smallest;
}
int largestValue(int x[],int y)
{
    int largest=x[0];
    for(int i=1;i<y;i++)
        {
            if(x[i]>largest)
            largest=x[i];
        }
    return largest;
}










