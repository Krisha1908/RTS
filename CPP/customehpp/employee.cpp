#include<iostream>
#include "employee.hpp"

using namespace std;
class EmployeeData : public Employee
{
    public:
    void printMessage()
    {
        cout<<"Hello EmployeeData";
    }
};

int main()
{

    EmployeeData obj;
    obj.printMessage();

}