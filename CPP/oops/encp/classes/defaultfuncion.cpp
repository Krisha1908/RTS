#include<iostream>
using namespace std;
class amzon
{
    public:
    void order(int item=0,int qty=1)
    {
        cout<<"\norder function ";
        cout<<"\nitem no = "<<item;
        cout<<"\nqty = "<<qty;
        cout<<"\n";
    };
};

int main()
{
    amzon a1;
    // a1.order();
    a1.order(20,11);

}