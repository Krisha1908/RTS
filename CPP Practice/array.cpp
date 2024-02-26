#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int *p = a;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the elements";
        cin>>p[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"\n"<<p[i];
    }


    
}