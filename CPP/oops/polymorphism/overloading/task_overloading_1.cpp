#include<iostream>
using namespace std;

class Student
{
    public:
    void getInfo()
    {
        cout<<"Student's information..."<<endl;
    }

    void getInfo(int id)
    {
        cout<<"id = "<<id<<endl;
    }

    void getInfo(int s1,int s2,int s3)
    {
        cout<<"marks of subject 1 = "<<s1<<endl;
        cout<<"marks of subject 2 = "<<s2<<endl;
        cout<<"marks of subject 3 = "<<s3<<endl;
        cout<<"total = "<<s1+s2+s3<<endl;
    }
    void getInfo(float per)
    {
        cout<<"Per = "<<per<<endl;
    }

    
};

int main()
{
    Student s1;
    s1.getInfo();
    s1.getInfo(37);
    s1.getInfo(90,89,95);
    s1.getInfo(91.33f);
}