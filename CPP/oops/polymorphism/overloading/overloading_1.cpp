#include<iostream>
using namespace std;

class Shape
{
    public:      

    void getArea()
    {
        cout<<"Area of Shape.."<<endl;
    }

    void getArea(int r)
    {
        cout<<"Area of Circle = "<<3.14 * r * r<<endl;
    }

    void getArea(char area[20])
    {
        cout<<"Area of Shape with string..."<<endl;
    }

    void getArea(int l, int b)
    {
        cout<<"Area of Rectangle = "<<l*b<<endl;
    }

    void getArea(int l, int b, int h){
        cout<<"Area of Cuboid = "<<l*b*h<<endl;
    }
};

int main()
{
    Shape s1;
    s1.getArea();
    s1.getArea(10);
    s1.getArea(10,20);
    s1.getArea(10,20,30);
    // s1.getArea(abcd);
}