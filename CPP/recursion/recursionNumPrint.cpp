#include<iostream>
using namespace std;

    
void print(int num)
{
    if(num==0)
    {
        return ;
    }
    else
    {
        print(num-1);
    }

    cout<<"\n"<<num;
}
int main()
{
    print(10);
}