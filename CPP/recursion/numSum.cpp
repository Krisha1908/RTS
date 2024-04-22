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
        return num +=num;
    }
}
int main()  
{
    int ans = sumOfDigit(10);
    cout<<"ANSWER = "<<ans;
    cout<<"\n";
}