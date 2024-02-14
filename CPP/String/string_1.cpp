//char array
//string class

#include <iostream>
#include <string>
using namespace std;

int main(){

    // char name[] = "Caleb";
    // cout<<name<<endl;

    string name = "java";
    cout<<"name = "<<name;

    string data;
    cout<<"Enter your name: ";
    cin>>data;

    cout<<"Your name is: "<<data<<endl;

    //getline
    //flush the buffer
    fflush(stdin);

    string data2;
    cout<<"Enter your name: ";
    getline(cin, data2);
    cout<<"Your name is: "<<data2<<endl;




}