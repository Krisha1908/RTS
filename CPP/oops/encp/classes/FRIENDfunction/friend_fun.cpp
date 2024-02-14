#include<iostream>
using namespace std;
class telephone
{
    public:
    int num = 123456;
    void notfriendfunction(telephone t1)
    {
        cout<<"\nnotfriendfunction calling.."<<endl;
        cout<<num;
    }


    void notfriend2();

    void friend iamfriend(telephone t);
};

void telephone::notfriend2()
{
    cout<<" \ni am not a friend function...\n";
    cout<<num;
}

void iamfriend(telephone t)
{
    cout<<"\n i am your friend\n";
    cout<<t.num;
}

int main()
{
    telephone tele;
    tele.notfriendfunction(tele);
    tele.notfriend2();
    iamfriend(tele);
    cout<<"\n";
}

