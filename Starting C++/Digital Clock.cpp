#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int h=0,m=0,s=0,h1=0,m1=0,s1=0;
  cout<<"Enter time in format HH:MM:SS\n\n";
  cin>>h>>m>>s;

  cout<<"\n\nSet Alarm in HH:MM:SS\n\n";
  cin>>h1>>m1>>s1;

  if((h<24)&&(m<60)&&(s<60))
  {
  for(h;h<24;h++)
  {
      for(m;m<60;m++)
      {
          start:
          for(s;s<60;s++)
          {
              //Tis will clear the existing screen data
              system("CLS");
              cout<<h<<":"<<m<<":"<<s;
              //This condition is used to check AM $ PM
                if(h<12)
                {
                 cout<<" PM ";
                }
                else
                {
                 cout<<" AM ";
                }

              //This will stop the loop for one second
              for(double i=0;i<99999999;i++)
              {
                  i++;
                  i--;
              }
          }
          s=0;
      }
      m=0;
  }
  h=0;
  //This will never stop the loop
  goto start;
  }
  else
  {
      cout<<"\nEnter correct time format in HH:MM:SS\n";
  }
  if((h==h1)&&(m==m1)&&(s==s1))
                {
                    cout<<"\a\a\a\a\a\a\a\a\a";
                }
}
