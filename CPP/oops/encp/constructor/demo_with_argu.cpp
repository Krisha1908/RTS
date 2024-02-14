#include<iostream>
using namespace std;

class Students
{
    public:
    Students(int id,char name[20])
    {
        cout<<"\nStudent constructor called";
        cout<<"\nparameterized constructor called";
        cout<<"\nID : "<<id;
        cout<<"\nNAME :"<<name;
    }
};

int main()
{
    Students s1(101,"raj");
    cout<<"\n";
}