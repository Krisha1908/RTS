#include<iostream>
using namespace std;
class test
{
    public:

    int num = 10;
    void getObject(test a)
    {
        cout<<"Object is created"<<endl;
        cout<<"Num = "<<a.num<<endl;
    }
};
int main()
{
    test t;
    t.num = 20;
    test t2;
    t2.num = 2000;
    // t.getObject(t2);
    t.getObject(t);
}