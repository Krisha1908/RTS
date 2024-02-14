#include<iostream>
using namespace std;

class Test{
    
    public:

    void operator ++()
    {
            cout<<"Operator overloading ++"<<endl;
    }

    void operator --()
    {
        cout<<"Operator overloading --"<<endl;
    }
};

int main()
{
    Test t;
    ++t;
    --t;
}