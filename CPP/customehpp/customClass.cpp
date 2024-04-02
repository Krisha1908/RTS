#include<iostream>
#include "customClass.hpp"
using namespace std;

void DerivedClass ::printMessage(){

    cout<<"Hello!!! DerivedClass"<<endl;
}

int main(){

    DerivedClass obj;
    obj.printMessage();


}