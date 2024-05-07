#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> s1;
    s1.push_back("HELLO");
    s1.push_back("WORLD");
    s1.push_back("CPP");

    for(string i : s1)
    {
        cout<<i<<endl;
    }

    ///remove element from vector
    s1.pop_back();
    cout<<"\nAfter removing element from vector"<<endl;
    for(string i : s1)
    {
        cout<<i<<endl;
    }

    //insert element at specific position
    s1.insert(s1.begin()+1,"JS");   
    cout<<"\nAfter inserting element at specific position"<<endl;
     for(string i : s1)
    {
        cout<<i<<endl;
    }

    //check size of vector
    cout<<"\nSIZE OF VECTOR "<<s1.size();

    cout<<"\n";
}