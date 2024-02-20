#include<iostream>
#include<string>
using namespace std;

void change(int *a)
{
 
    cout<<"value of a = "<<*a;
    *a = 200;
}

int main()
{
    int a = 100;
    change(&a);
    cout<<"\nAfter change function calling...";
    cout<<"\nValue of a = "<<a;
    cout<<"\n";
}