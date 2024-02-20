#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name = "krisha";
    string *p;
    p = &name;
    cout<<"\nValue of name : "<<p;
    cout<<"\n";
}