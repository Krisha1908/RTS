#include<iostream>
#include<string>
using namespace std;

int main()
{
    auto add = [](int a,int b){
        return a+b;
    };
    
    auto greet = [](){
        cout<<"Hello World"<<endl;
    };
    greet();

    cout<<"ADD = "<<add(20,40);

    auto isAdult = [](int age){
        return age>10;
    };

    if(isAdult(2)){
        cout<<"\n Adult"<<endl;
    }else{
        cout<<"\n Not Adult"<<endl;
    }

     auto outer =[](){

            auto inner =[](){
                cout<<"Inner lambda"<<endl;
            };

            cout<<"Outer lambda"<<endl;
            inner();

    };

    outer();

}