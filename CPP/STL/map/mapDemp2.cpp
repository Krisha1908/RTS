#include<iostream>
#include<map>
#include<string>
#include<list>
using namespace std;

int main()
{
    map<string,list<string>> m1;
    m1["india"].push_back("delhi");
    m1["india"].push_back("gujarat");
    m1["india"].push_back("goa");

    m1["australiya"].push_back("sydeny");
    m1["australiya"].push_back("melbourne");
    m1["australiya"].push_back("perth");

    m1["uk"].push_back("london");
    m1["uk"].push_back("manchester");
    m1["uk"].push_back("birmingham");

    m1["japan"].push_back("tokyo");
    m1["japan"].push_back("osaka");
    m1["japan"].push_back("kyoto");

    list<string>  usaCity;
    usaCity.push_back("new york");
    usaCity.push_back("los angeles");
    usaCity.push_back("chicago");



      for(auto i :m1){
        cout<<"country = "<<i.first<<"--";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
      }   


}