#include<iostream>
using namespace std;

class TRAI{
    public:
    virtual void call()=0;
};

class JIO : public TRAI
{
    public:
    void call()
    {
        cout<<"JIO....Call";
    }

    void call1(int x){
        cout<<"\nCalling from JIO to smir sir..."<<endl;
    }
};

int main()
{
    JIO j;
    j.call();
    j.call1(5);
}