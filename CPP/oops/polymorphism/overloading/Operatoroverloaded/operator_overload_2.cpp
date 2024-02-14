#include<iostream>
using namespace std;

class Test{

    public:
    int x = 0;
    void operator +(Test &t)
    {
        cout<<"Operator overloading +"<<endl;
        cout<<"X = "<<t.x<<endl;
    }
};

int main()
{
    Test t1,t2;
    t1.x = 100;
    t2.x = 200;
    t1+t2;
}