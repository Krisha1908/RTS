#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int *p = a;
    int b[5];
    int *p1 = b;
   

    cout<<"Enter the elements of A\n";
    for (int i = 0; i < 5; i++)
    {
        
        cin>>p[i];
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"\n"<<p[i];
    // }

    cout<<"\nB..........\n";
    for ( int i = 0; i < 5; i++)
    {
        p1[i]=p[i];
        cout<<"\n"<<p1[i];
    }
    
    


    
}