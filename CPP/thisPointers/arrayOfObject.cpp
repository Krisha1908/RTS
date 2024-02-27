#include<iostream>
#include<string>
using namespace std;

class Student{

    int id;
    string name;
    int mark;

    public:
    void getStudentData(int id,string name,int mark);
    void printStudentData();
};

//local variable of getStudentData
void Student :: getStudentData(int id,string name,int mark)
{
    this->id = id;
    this->name = name;
    this->mark = mark;
}

void Student :: printStudentData()
{
    cout<<"Student Id is "<<this->id<<endl;
    cout<<"Student Name is "<<this->name<<endl;
    cout<<"Student Mark is "<<this->mark<<endl;
}



int main()
{

    // Student s1;
    // s1.getStudentData(101,"Ram",90);
    // s1.printStudentData();

    // Student s[3];
    // s[0].getStudentData(101,"Ram",90);
    // s[0].printStudentData();

    // s[1].getStudentData(102,"Shyam",80);
    // s[1].printStudentData();

    // s[2].getStudentData(103,"Ravi",70);
    // s[2].printStudentData();



    Student s[3];

    int id;
    string name;
    int marks;


for (int i = 0; i < 3; i++)
{
    cout<<"\n Enter id: for "<<i+1<<" student: ";
    cin>>id;
    cout<<"\n Enter name: for "<<i+1<<" student: ";
    cin>>name;
    cout<<"\n Enter marks: for "<<i+1<<" student: ";
    cin>>marks;
    s[i].getStudentData(id,name,marks);
}


cout<<"\n ::::::::::::::::::::::Student Data is:::::::::::::::::: \n";
    for (int i = 0; i < 3; i++)
    {
        s[i].printStudentData();
    }
    
}