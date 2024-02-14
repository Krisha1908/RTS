#include<iostream>
using namespace std;
class employees 
{
    private:
    int id;
    char name[30];
    int salary;

    public :
    void getempdetalis();
    void displayempdetails();
};

void employees :: getempdetalis()
{
    cout<<"\nEnter id of employee: ";
    cin>>id;
    cout<<"\nEnter the name of employees : ";
    cin>>name;
    cout<<"\nEnter the salary:";
    cin>>salary;

}

void employees :: displayempdetails()
{
    cout<<"\nId of employee : "<<id;
    cout<<"\nname of employee : "<<name;
    cout<<"\nsalary of employee : "<<salary;
}

int main()
{
    employees emp[3];

    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter the detalis of Employee"<<i+1;
        emp[i].getempdetalis();
    }


    for(int i=0;i<3;i++)
    {
        cout<<"\n\n the detalis of Employee"<<i+1;
        emp[i].displayempdetails();
    }

}