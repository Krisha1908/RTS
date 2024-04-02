#include<iostream>
using namespace std;

template<typename J,typename K> void sum(J a,K b){

    cout<<"\n a =  "<<a;
    cout<<"\n b =  "<<b; 
}

int main(){

    sum(10,20);
    sum(100,"krisha");

}