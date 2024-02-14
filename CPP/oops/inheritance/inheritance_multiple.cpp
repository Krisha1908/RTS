#include<iostream>
using namespace std;

class Netflix
{
    public:
    int id =1234 ;
    char name[20]="Krisha";

    void userAccount()
    {
        cout<<"USER ACCOUNT"<<endl;
        cout<<"id = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
    }
};

class Movies:public Netflix
{
    public:
    char Movie_name[20] = "Avengers";

    void MovieList()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"id = "<<id<<endl;
        cout<<"Movie List"<<endl;
        cout<<"Movie name = "<<Movie_name<<endl;
    }
};

class Series : public Netflix{

    public:

    char seriesName[20]= "Game of Thrones";
    void seriesList()
    {
        cout<<"User Name ="<<name<<endl; 
        cout<<"Series List"<<endl;
        cout<<"Series Name = "<<seriesName<<endl;
    }

};

int main()
{
    Movies m1;
    m1.MovieList();
    Series s1;
    s1.seriesList();
}