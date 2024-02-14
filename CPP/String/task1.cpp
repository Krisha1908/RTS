#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentence;
    int count=1;
    cout<<"Enter the sentence : ";
    getline(cin, sentence);
    for (int i = 0; i < sentence.length();i++)
    {
        
        if(sentence[i]==' ')
        {
            count++;
        }
    }
    cout <<"\n"<< count;
}