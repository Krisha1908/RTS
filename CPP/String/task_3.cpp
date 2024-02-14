#include<iostream>
#include <string>
using namespace std;

int findIndex(string name , char ch)
{
    for ( int i = 0; i < name.length(); i++)
    {
        if(name[i]==ch)
        {
            return 1;
        }
    }
    return 0;
}



int main()
 {
    string name = "ram";
    char characterToFind = 'a';
    int index = findIndex(name, characterToFind);

    if (index == name.find('a')) {
        cout << "Index is " <<  index << endl;
    } else {
        cout << "Character not found " << endl;
    }

    return 0;
}