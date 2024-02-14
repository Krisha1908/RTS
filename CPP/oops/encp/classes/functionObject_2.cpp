#include<iostream>
using namespace std;
class area
{
    public:
    int len;
    int bre;
    void getSquareArea(area a1)
    {
        cout<<"Area of square = "<<a1.len * a1.len<<endl;
    }
    void getRectangleArea(area a1)
    {
        cout<<"area of rect = "<<a1.len * a1.bre<<endl; 
    }
};

int main()
{
    area a;
    a.len=12;
    a.bre=20;
    a.getSquareArea(a);
    a.getRectangleArea(a);
}