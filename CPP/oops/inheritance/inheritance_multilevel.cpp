#include<iostream>
using namespace std;
class gov
{
    public:
    char partyName[10]="BJP";
    char pmName[20]="Narendra Modi";
};

class stategov :public gov
{
    public:
    char cmname[20]="Yogi Adityanath";
    char stateName[20]="Uttar Pradesh";

     void getMyStateData(){

        cout<<"Party name: "<<partyName<<endl;
        cout<<"PM name: "<<pmName<<endl;
        cout<<"CM name: "<<cmname<<endl;
        cout<<"State name: "<<stateName<<endl;
     }   

};

class AMC : public stategov
{
    public:
    void getMyCityData(){

        cout<<"Party name: "<<partyName<<endl;
        cout<<"PM name: "<<pmName<<endl;
        cout<<"CM name: "<<cmname<<endl;
        cout<<"State name: "<<stateName<<endl;

    }
};

int main(){

    AMC a1;
    a1.getMyCityData();
    a1.getMyStateData();
    return 0;

}