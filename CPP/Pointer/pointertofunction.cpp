#include<iostream>
using namespace std;
int test(int a,int b )
{
    cout<<"Value of a = "<<a<<endl;
}
int test2(int a,int b )
{
    cout<<"Value of b = "<<b;
}
int main()
{
    int (*p)(int,int)=test;
    p(10,20);
    int (*p2)(int,int) = test2;
    p2(20,30);
}