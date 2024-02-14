#include<iostream>
using namespace std;
class RBI{

    public:
    //Abstract class
    virtual void withdraw()
    {
        cout<<"Withdraw....RBI";
    }
};

class SBI : public RBI{
    public:
    void withdraw()
    {
        cout<<"Withdraw....SBI";
    }
};

int main()
{
    // SBI s;
    // s.withdraw();

    // RBI r;
    // r.withdraw();
    cout<<"\n";
}