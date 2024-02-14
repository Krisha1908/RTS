#include<iostream>
using namespace std;

class Compare
{
    public:
    int a,b,c;
    bool operator >(Compare &c)
    {
        cout<<"> Called.."<<endl;
        return this->a > c.a and this->b > c.b and this->c > c.c;
    }

    bool operator ==(Compare &c)
    {
         cout<<"== Called.."<<endl;
         return this->a == c.a and this->b == c.b and this->c == c.c;
    }

};

int main()
{
    Compare c1,c2;
    c1.a=100;
    c2.a=100;
    c1.b=200;
    c2.b=200;
    c1.c=300;
    c2.c=300;

    if(c1>c2)
    {
        cout<<"C1 is greater than c2";
    }
    else if(c1==c2)
    {
        cout<<"C1 is qual to c2";
    }
    else
    {
        cout<<"C2 is greater than c1";
    }


}