#include<iostream>
#include<list>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<int,string>m1;

    m1[1] = "amit";
    m1[2] = "raj";
    m1[3] = "sumit";

    for(auto it = m1.begin();it!=m1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}