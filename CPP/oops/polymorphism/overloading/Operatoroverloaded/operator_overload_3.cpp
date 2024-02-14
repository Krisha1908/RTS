#include<iostream>
using namespace std;



class Sum{

    public:
    int x =0;

    void operator +(Sum &s){
        cout<<"operator overload called..."<<endl;
        cout<<"x = "<<x<<endl; // 1st operand
        cout<<"s.x"<<s.x<<endl; // 2nd operand
    }

};

int main(){

    Sum s1,s2;
    s1.x = 100;
    s2.x = 200;

    s1+s2; // s1.operator+(s2);
    //s2 + s1 // s2.operator+(s1);


}