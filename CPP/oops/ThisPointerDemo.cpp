#include<iostream>
using namespace std;

class Bank
{
    public:
    int balance = 200;

    void deposite(int amount)
    {
        int balance = 100;
        cout<<"Balance = "<<balance<<endl;
        cout<<"instance Balance = "<<this->balance<<endl;
        this->balance = this->balance + amount;
    }

    void checkBalance()
    {
        cout<<"BALANCE = "<<balance<<endl;
    }
};

int main()
{
    Bank b1;
    b1.deposite(1000);
    b1.checkBalance();
}