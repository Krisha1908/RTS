#include<iostream>
#include<string>
using namespace std;

void change(int a)
{
    
    cout<<"\nValue of a = "<<a;
    a = 200;

}
int main()
{
    int a = 10;
    change(a);
    cout<<"\nAfter function calling...";
    cout<<"\nValue of x = "<<a;
    cout<<"\n";
}