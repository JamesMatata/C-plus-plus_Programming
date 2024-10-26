#include<iostream>
#include<stdlib.h>
class M_PESA
{
    private: int phoneNumber,pin,amount;
    public:
        void askNumber()
        {
            int number;
            std::cout<<"-----------------------ENTER NUMBER-----------------------\n";
            std::cin>>number;
            phoneNumber=number;
        }
        int getNumber()
        {
            return phoneNumber;
        }
};
int main()
{
    M_PESA sendMoney;
    sendMoney.askNumber();
    std::cout<<sendMoney.getNumber();
    return 0;
}
