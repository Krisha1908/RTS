#include<iostream>
#include<string>

using namespace std;

int main(){


    string name ="java";
    cout<<"name "<<name[0];
    cout<<"name "<<name[1];
    cout<<"name "<<name[2];
    cout<<"name "<<name[3];
    
    //how to find length of string
    int len = name.length();
    cout<<"\n Length of name: "<<len<<endl;

    for(int i=0;i<name.length();i++){
        cout<<"\n"<<name[i];
    }







}