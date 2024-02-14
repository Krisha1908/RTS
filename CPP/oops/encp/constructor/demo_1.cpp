#include<iostream>
using namespace std;

class bank
{
    public:
    int id;
    bank()
    {
        cout<<"\nBank constructor called...";
        cout<<"\nDefault constructor called..";
        id =100;
    }
};

int main()
{
    bank b1;
    cout<<"\n";
}