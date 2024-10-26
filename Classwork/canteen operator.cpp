#include<iostream>
using namespace std;
int main()
{
int choice;
lb:
    cout<<"\nChoose:";
    cout<<"\n1.Breakfast \n2.Lunch \n3.Supper";
    cout<<"\n\nEnter choice : ";
    cin>>choice;
    system("cls");
    if(choice==1)
    {
        int price;
        string food;
        cout<<"\nEnter type of foods available and there prices:";
        cout<<"\nFood\t\t"; cin>>food;cout<<"\tprice(sh)\n";cin>>price;
        cout<<"Foods available are:\n\n # - Bread________________sh.15\n\n # - Black tea______________sh.10\n\n # - Milk tea_________sh.20\n\n # - Mandazi___________sh.10\n\n # - Sweet potatoes___________sh.20";

    }
    return 0;
}
