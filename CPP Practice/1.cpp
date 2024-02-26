#include<iostream>
using namespace std;
int main()
{
    // int a;
    // int *p;
    // p = &a;
    // cout<<"a = "<<a;
    // cout<<"\n*p = "<<*p;


 ////sum 
    // int num=10,num2=10;
    // int *p1 = &num,*p2 = &num2;
    // int sum;

    // sum = *p1 + *p2;
    // cout<<"Sum = "<<sum;



///swap
    int temp;
    int num1,num2;
    int *p1 = &num1, *p2 = &num2;

    cout<<"Enter the a = ";
    cin>>num1;
    cout<<"\nEnter the b = ";
    cin>>num2;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout<<"num2 = "<<*p2;
    cout<<"\nnum1 = "<<*p1;

}