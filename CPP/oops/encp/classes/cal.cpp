#include<iostream>
using namespace std;
class cal
{
    public:
    int add(int a,int b);

    int sub(int a,int b);
    

    int mul(int a,int b);
    
    int div(int a,int b);


};

int cal::add(int a,int b)
{
    cout<<"\nAdd= "<<a+b;
    return 0;
}
int cal:: sub(int a,int b)
{
    cout<<"\nsub = "<<a-b;
    return 0;
}
int cal:: mul(int a,int b)
{
    cout<<"\nmul = "<<a*b;
    return 0;
}
int cal:: div(int a,int b)
{
        cout<<"\ndiv = "<<a/b;
        return 0;
    }


int main()
{
    cal c;
    int ans = c.add(10,20);
    cout<<"add = "<<ans;
    int ans1 = c.sub(20,10);
    cout<<"sub = "<<ans1;
    int ans2 = c.mul(20,10);
    cout<<"mul = "<<ans2;
    int ans3 = c.div(20,10);
    cout<<"div = "<<ans3;
    

}