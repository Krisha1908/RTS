#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,string> m1;
    m1["class1"] = "A";
    m1["class2"] = "B";
    m1["class3"] = "C";
    m1["class4"] = "D";
    m1["class5"] = "E";

    auto f = m1.find("class11");

    cout<<f->first<<" "<<f->second<<endl;

    if(m1.find("class1")!=m1.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    
    }


    if(m1.find("class5")!=m1.end()){
        cout<<"found"<<endl; 
    }
    else{
        cout<<"not found"<<endl;
    }

    m1.erase("class1");
    for(auto it = m1.begin();it!=m1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

}