#include<iostream>
using namespace std;

class Employee{

    private:
    int id;
    char name[30];
    float salary;
    public:

    void getEmployeeDetails();
    void displayEmployeeDetails();
};

void Employee :: getEmployeeDetails(){

    cout<<"\n Enter the id: ";
    cin>>id;
    cout<<"\n Enter the name: ";
    cin>>name;
    cout<<"\n Enter the salary: ";
    cin>>salary;


}

void Employee :: displayEmployeeDetails(){

    cout<<"\n employee id: "<<id;
    cout<<"\n employee name: "<<name;
    cout<<"\n employee salary: "<<salary;
}


//array of object...
int main(){

        Employee e;
        e.getEmployeeDetails();
        e.displayEmployeeDetails();


}