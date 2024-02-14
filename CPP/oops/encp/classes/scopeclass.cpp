#include<iostream>
using namespace std;
//scope resolution operator ::

class bank
{
    int netBalance =0;
    public:
    void deposite(int amount)
    {
        netBalance = netBalance + amount;
        cout<<"deposite fuction";
    }

    void withdraw (int amount);
    
    int checkBalance();
    
};

void bank::withdraw(int amount)
{
    if(amount>netBalance)
    {
        cout<<"\nnot valid";
    }
    else
    {
        netBalance = netBalance - amount;
        cout<<"\nwithdraw function";
    }

}

int bank :: checkBalance()
{
    cout<<"\ncheckbalance function";
    return netBalance;
}
int main()
{
    bank b1;
    b1.deposite(1000);
    b1.withdraw(100);
    int bal = b1.checkBalance();
    cout<<"\nbalance = "<<bal;

}