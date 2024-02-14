#include<iostream>
using namespace std;
class table
{
    public:
    void table1(int num);
    void fact(int num);
};

void table::table1(int num=10)
{
    for(int i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<i*num<<endl;
    }
    
}

void table::fact(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact *=i;
    }
    cout<<"\nfact = "<<fact<<endl;
}
int main()
{
    int a=5;
    int b=2;
    table t;
    t.table1(b);
    t.fact(a);
}