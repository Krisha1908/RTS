#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=10;
    int *p ;
    p=&a;
    cout<<"\nValue of a = "<<a<<endl;
    cout<<"Address of a = "<<&a;

    cout<<"\nValue of p ="<<p<<endl;
    cout<<"Address of p = "<<*p<<endl;

    *p = 20;
    cout<<"\nValue of a = "<<a<<endl;
     cout<<"Address of a = "<<&a;
    cout<<"\n";
}