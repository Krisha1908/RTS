#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {12,2,90,76,1};
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<*min_element(v.begin(),v.begin()+4)<<endl;
}