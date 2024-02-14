#include<iostream>
using namespace std;

class Amazone{

    public:
    void order(int id){
        cout<<"Order id = "<<id<<endl;
    }
    void order(float id){
        cout<<"Order id = "<<id<<endl;
    }
    void order(double id){
        cout<<"Order id double= "<<id<<endl;
    }


};

int main(){

    Amazone a;
    //a.order(10.5f);
    a.order(123.23);
    


}