#include<iostream>
using namespace std;
int main()
{
    int a = 20;
    int *p; 
    p= &a;

    cout<<"\nAddress of a = "<<&a<<endl;
    cout<<"Value of a = "<<a<<endl;

    cout<<"\nValue of p ="<<p<<endl;
    cout<<"Address of p = "<<*p<<endl;

    p--;
    cout<<"\nValue of p ="<<p<<endl;
    cout<<"Address of p = "<<*p<<endl;

    cout<<"\n";
}