#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()

{
    stack<string> s;
    s.push("abc");
    s.push("def");
    s.push("ghi");
    s.push("jkl");

    // cout<<"EMPTY = "<<s.empty()<<endl;
    // while (!s.empty())
    // {
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    // cout<<"EMPTY = "<<s.empty()<<endl;

    // cout<<s.top()<<endl;

    // s.top();
    // cout<<s.top()<<endl;

      while(s.size()>0){
        cout<<s.top()<<endl;
        s.pop();
   }

    
}