#include<iostream>
using namespace std;
int main()
{
int a[5],temp=0;
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << a[i]<<endl;
    }
}    