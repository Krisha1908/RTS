#include<iostream>
using namespace std;

int main()
{
    int a[10], n, value, position, i = 0;

    cout << "Enter the size :"; //5
    cin >> n;
    while (i < n) //0<5
    {
        cout << "Enter the array value:";//1 2 3 4 5
        cin >> a[i];
        i++;
    }

    cout << "\nEnter the position :";  //1
    cin >> position;
    cout << "\nEnter the value :";    //222
    cin >> value;

    if (position < 0 || position >= n) //1<0 || 1>=5
    {
        cout << "Invalid position";
        return 0;
    }

    
    for (i = n - 1; i >= position; i--) // 0 = 5 - 1; 0 >=1 ; 0-- /// a[0+1] = a[i]; 
    {
        a[i + 1] = a[i];
    }

    a[position] = value;//a[1] = 222
    n++;

  
    cout << "Updated array: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
