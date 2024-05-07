#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<int> v1;
    int num;

    while (true)
    {
       cout<<"\nEnter the number you want to add in vector : ";
       cin>>num;

       v1.push_back(num);

       cout<<"\nPress any number to add another number in vector\nEnter 0 to Exit\n";
       cin>>num;
       if(num==0)
       {
        break;
       }
       
    }

    for(int i:v1)
    {
        cout<<i<<endl;
    }
    

}