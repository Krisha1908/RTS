#include<iostream>
using namespace std;

class Parent{
    public:
    void display()
    {
        cout<<"Parents Class";
    }
};

class Child : public Parent{

    public:
    void display()
    {
        cout<<"Child class";
    }
};

int main()
{
    Child c;
    c.display();
    cout<<"\n";
}