#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
    // int a[] = {10,12,45,40,54};
    // sort(a,a+5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<" ";
    // }



    vector<int> v = {21,54,67,98,21};
    sort(v.begin(),v.end());
    sort(v.begin(),v.end(),greater<int>());
    for(auto x:v)
    {
        cout<<x<<" ";
    }

    vector<string> names = {"abc", " zaw" , "jkl" , "tre"};
    sort(names.begin(),names.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    
    cout<<"\n";
}