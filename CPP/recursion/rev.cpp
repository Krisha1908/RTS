#include<iostream>
using namespace std;

int rev(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return (num/10)%10;
    }
}
int main()
{
    int ans = rev(124);
    cout<<"ANS = "<<ans;
    cout<<"\n";
}