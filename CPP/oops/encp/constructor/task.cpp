// default
// #include<iostream>
// using namespace std;
// class School
// {
//     public:
    
//     School()
//     {
//         cout<<"\nschool constructor called...";
        
//     }
// };

// int main()
// {
//     School s1;
   
// }


//scope
// #include<iostream>
// using namespace std;

// class School
// {
//     public:
//     School();
    
// };

// School::School()
// {
//     cout<<"\nSchool constructor .....";
// }

// int main()
// {
//  School s1;   
// }



// argu
#include<iostream>
using namespace std;

class school{

    public:



    school(int id_num,char name[20]){
        cout<<"\n school constructor called";
        cout<<"\n id_num: "<<id_num;
        cout<<"\n name: "<<name;
    }
    
};

int main(){

   
    school s3(101,"Krisha"); 

}