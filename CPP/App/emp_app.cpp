#include<iostream>
#include<string>
using namespace std;

class Employee{

    private:
    int age;
    int id;
    float salary;
    string name;
    string gender;
    

    public:

    Employee(int a,int i, float s, string n, string g)
    {
        age = a;
        id = i;
        salary = s;
        name = n;
        gender = g;
    }

    Employee(){}

    void display()
    {
        cout<<"ID : "<<id;
        cout<<"\nName : "<<name;
        cout<<"\nSalary : "<<salary;
        cout<<"\nAge : "<<age;
        cout<<"\nGender : "<<gender;
    }
};

int main()
{
    int empCount;
    cout<<"\nEnter the number of Employees : ";
    cin>>empCount;

    if(empCount<=0)
    {
        cout<<"\nINVALID CHOICE";
        exit(0);
    }
    else 
    {}

    

    Employee *emp = new Employee[empCount];

    for (int i = 0; i < empCount; i++)
    {
        int age;
        int id;
        float salary;
        string name;
        string gender;

       
        cout<<"\nEnter the ID of Employee "<<i+1<<": ";
        cin>>id;
        fflush(NULL);
        cout<<"\nEnter the Name of Employee "<<i+1<<": ";
        getline(cin,name);
        fflush(NULL);
        cout<<"\nEnter the age of Employee "<<i+1<<": ";
        cin>>age;
        cout<<"\nEnter the salary of Employee "<<i+1<<": ";
        cin>>salary;
        do{
            cout<<"\nEnter the Gender of Employee "<<i+1<<": ";
            cin>>gender;
        }while(gender!= "male" && gender!="female");  

        emp[i] = Employee(age,id,salary,name,gender);
    
      
}

for ( int i = 0; i < empCount; i++)
{
    cout<<"Employee "<<i+1<<":";
    emp[i].display();
}

    
}