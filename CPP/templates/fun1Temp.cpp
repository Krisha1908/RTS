#include<iostream>
#include<typeinfo>
using namespace std;



template <typename K> void getAge(K age){

    cout << "Age is: " << age << endl;
}



template<typename K> K sum(K a, K b){
    
    if(typeid(a) == typeid(int) && typeid(b) == typeid(int)){
        cout<<"\n here...";
        return a+b;
    }
   
}

int main(){


    getAge(20);
    getAge(20.5);
    getAge("Hundred");
    sum(10,20);
    

}