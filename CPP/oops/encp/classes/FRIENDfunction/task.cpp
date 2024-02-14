#include<iostream>
using namespace std;
class last;
class second;
class first
{
    public:
    int x=100;
    void friend iamfriend(first aobj,second bobj,last cobj);
};
class second
{
    public:
    int z=30;
    void friend iamfriend(first aobj,second bobj,last cobj);
};

class last 
{
    public:
    int y=20;
    void friend iamfriend(first aobj,second bobj,last cobj);
};

void iamfriend(first aobj ,second bobj, last cobj)
{
    cout<<"\nHii i am friend function...";
    cout<<"\n x = "<<aobj.x;
    cout<<"\n z = "<<bobj.z;
    cout<<"\n y = "<<cobj.y;

    int ans = aobj.x + bobj.z + cobj.y;
    cout<<"\nAns =  "<<ans; 
}

int main()
{
    first f;
    second s;
    last l;

    iamfriend(f,s,l);
}