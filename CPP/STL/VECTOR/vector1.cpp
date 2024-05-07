#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);


    for(int i :v1)
    {
        cout<<i<<endl;
    }
}