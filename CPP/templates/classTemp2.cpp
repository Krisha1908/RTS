#include<iostream>
#include<string>
using namespace std;


template <class K> class MyClass{

public:
    void test(int a){
        cout<<"Test 1: "<<a<<endl;
    }

//function template
    void test2(K a){

        cout<<"Test 2: "<<a<<endl;

    }
};


int main(){


    
    MyClass<int> m1; 
    m1.test(19);
    m1.test2('K');
    m1.test2(19.08);
    m1.test2(true);

    MyClass<string> m2; 
    m2.test2("krisha");
   



}