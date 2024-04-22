#include<iostream>
using namespace std;

    
int   print(int num)
{
    int i;
    if(num==0)
    {
        return 1;
    }
    return num * print(num-1);
    
}

int main()
{
    
    int ans = print(3);
    cout<<"ANS = "<<ans;
}