#include<iostream>
using namespace std;
int sumOfDigit(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return num%10 + sumOfDigit(num/10);
    }
}
int main()  
{
    int ans = sumOfDigit(341);
    cout<<"ANSWER = "<<ans;
    cout<<"\n";
}