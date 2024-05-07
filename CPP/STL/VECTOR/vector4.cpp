// #include<iostream>
// #include<vector>
// #include<string>

// using namespace std;

// int main()
// {
//     vector<string> s1;
//     string name;
//     while (true)
//     {
//        cout<<"\nEnter the Name : ";
//        cin>>name;

//        s1.push_back(name);

//        cout<<"\nPress any number to add another name in vector\nEnter 0 to Exit\n";
//        cin>>name;
//        if(name=="0")
//        {
//         break;
//        }
       
//     }

//     for(string i:s1)
//     {
//         cout<<"NAME = "<<i<<endl;
//     }

//     // Call isPalindrome function
//     bool palindromeResult = isPalindrome("naman");
//     if (palindromeResult) {
//         cout <<"palindrome" << endl;
//     } else {
//         cout << "not a palindrome." << endl;
//     }



// }

// bool isPalindrome(string s){
//     //naman
//     int n=s.size(); //5
//     for(int i=0;i<n/2;i++){
//         //s[0]==s[4]
//         //s[1]==s[3]
//         //s[2]==s[2]
//         if(s[i]!=s[n-i-1]){
//             return false;
//         }
//     }
//     return true;
// }