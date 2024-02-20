#include<iostream>
using namespace std;

void file()
{
    cout<<"\nFile is opened..";
}
void database()
{
    cout<<"\ndatabase is opened..";
}

int main()
{
    string input = "file";
    if(input == "file")
    {
        void (*p)()=file;
        p();
    }    
    else
    {
        void (*p)()=database;
        p(); 
    }
    cout<<"\n";
}