#include<iostream>
using namespace std;
class Employee
{

     //instance variable --> class variable
    //local variable --> function variable

    public:
    int salary=1000;
     int a =100;

    void EmpData(int salary)
    {
        cout<<"salary = "<<salary<<endl;
        cout<<"Salary ->"<<this->salary;
         cout<<"a is ->" <<this->a<<endl; //this pointer is used to access the class variable when local variable is having same name

    }
};
int main()
{
    Employee e1;
    e1.EmpData(20000);
}