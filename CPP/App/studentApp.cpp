#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    string name;//instance variable
    int age;

    public:
    
    Student(string n,int a)
    {
        name = n;
        age = a;
    }
    Student(){}

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

};

int main()
{
    int stuCount;
    cout<<"\nEnter the number of students : ";
    cin>>stuCount;

    Student *stu = new Student[stuCount];

    //student information input...

    for (int i = 0; i < stuCount; i++)
    {
        string name;
        int age;
        fflush(NULL);
        cout<<"\nEnter name of student "<<i+1<<":";
        getline(cin,name);
        
         fflush(NULL);
        cout<<"\nEnter age of student "<<i+1<<":";
        cin>>age;

        stu[i] = Student(name,age);

    }

    cout<<"\nStudent Information:";
    for(int i=0;i<stuCount;i++){
        cout<<"\n Student "<<i+1<<": ";
        stu[i].display();
    }
    
}