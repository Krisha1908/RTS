#include<iostream>
using namespace std;

class Grandpa
{
    public:
    char g_name[20]="Ghanshyambhai";
    int g_age=65;
};

class Father:public Grandpa
{
    public:
    char f_name[20]="Sunilbhai";
    int f_age=41;

    
};

class daughter:public Father
{
    public:
    char d_name[20]="krisha";
    int d_age=17;

    void printdata()
    {
        cout<<"\nGrandpa name : "<<g_name;
        cout<<"\nGranpa age : "<<g_age;
        cout<<"\nFather name : "<<f_name;
        cout<<"\nFather age : "<<f_age;
        cout<<"\nDaughter name : "<<d_name;
        cout<<"\nDaughter age : "<<d_age;
    }
};

int main()
{
    daughter d1;
    d1.printdata();
}