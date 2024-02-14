#include<iostream>
using namespace std;
class last;
class first
{
    public:
    int x=100;
    void friend iamfriend(first aobj,last bobj);
};

class last 
{
    public:
    int y=20;
    void friend iamfriend(first aobj,last bobj);
};

void iamfriend(first aobj , last bobj)
{
    cout<<"\nHii i am friend function...";
    cout<<"\n"<<aobj.x;
    cout<<"\n"<<bobj.y;
}

int main()
{
    first f;
    last l;

    iamfriend(f,l);
}