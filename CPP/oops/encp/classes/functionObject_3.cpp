#include<iostream>
using namespace std;
class clg
{
    public:
    int stucount;
    void science(clg si)
    {
    
        cout<<"Science students = "<<si.stucount<<endl;
    }

    void commerce(clg com)
    {
        cout<<"Commerce Students = "<<com.stucount<<endl;
    }

    void art(clg ar)
    {
        cout<<"ar Students = "<<ar.stucount<<endl;
    }
};

int main()
{
    clg c;
    c.stucount = 10;
    c.science(c);

    clg comm;
    comm.stucount = 20;
    comm.commerce(comm);

    clg a;
    a.stucount = 100;
    a.science(a);

}