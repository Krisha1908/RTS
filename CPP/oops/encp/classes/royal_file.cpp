// #include<iostream>
// using namespace std;
// class First
// {
//     public:
//     int i;
//     char c;
//     float fo;
// };

// int main()
// {
//     First f;
//     cout<<"\nEnter the value of int i = ";
//     cin>>f.i;
//     cout<<"\nValue of int i = "<<f.i;
//     cout<<"\n\nEnter the value of char c = ";
//     cin>>f.c;
//     cout<<"\nValue of char c = "<<f.c;
//     cout<<"\n\nEnter the value of float f = ";
//     cin>>f.fo;
//     cout<<"\nvalue of float fo = "<<f.fo;
// }
// -------------------------------------------------------



// #include<iostream>
// using namespace std;
// class sumofavg
// {
//     public:
//     int no1,no2,no3;
//     float sum=0,avg=0;
// };
// int main()
// {
//     sumofavg s;
//     cout<<"\nEnter the number no1 = ";
//     cin>>s.no1;
//     cout<<"\nEnter the number no2 = ";
//     cin>>s.no2;
//     cout<<"\nEnter the number no3 = ";
//     cin>>s.no3;

//     s.sum =s.no1+s.no2+s.no3;
//     cout<<"sum = "<<s.sum;
//     s.avg = (s.no1+s.no2+s.no3)/3;
//     cout<<"avg = "<<s.avg;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// class shape_area
// {
    // public:
    // double radius, circum, breath, height, area;   
// };
// int main()
// {
//     shape_area a;
//     /*Areas of Circle = pie * r * r */
//     cout<<"\nEnter the radius:";
//     cin>>a.radius;
//     a.area= 3.14 * a.radius * a.radius;
//     cout<<"\nArea = "<<a.area;

//     /*Area of Triangle = 0.5 * b * h */
//     cout<<"\nEnter the breath:";
//     cin>>a.breath;
//     cout<<"\nEnter the height:";
//     cin>>a.height;
//     a.area= 0.5 * a.breath * a.height;
//     cout<<"\nArea = "<<a.area;

//     /* Circumference of CIRCLE = 2 * pie * r */
//     a.circum= 2 * 3.14 * a.radius;
//     cout<<"\nArea = "<<a.circum;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class second
// {
//     public:
//     int sec=0,min=0,hour=0,remsec=0;
// };
// int main()
// {
//     second s;
//     cout<<"\nEnter the second:";
//     cin>>s.sec;
//     s.hour =s.sec / 3600;
//     s.min =(s.sec % 3600)/60;
//     s.remsec= (s.sec % 3600)%60;
//     cout<<" \nHours = "<<s.hour;
//     cout<<"\nmin = "<<s.min;
//     cout<<"\nREmsec = "<<s.remsec;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class month
// {
//     public:
//     int d, days, m;
// };
// int main()
// {
//     month m;
//     cout<<"\nEnter the number of days";
//     cin>>m.d;
//     m.m=m.d/30;
//     m.days=m.d%30;
//     cout<<"\nMonths = "<<m.m;
//     cout<<"\nNumber of days = "<<m.days;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class interest
// {
//     public:
//     float p,r,n;
//     float SI;
// };
// int main()
// {
//     interest i;
//     cout<<"\n Enter principle amount :";
//     cin>>i.p;
//     cout<<"\n Enter Rate of Interest : ";
//     cin>>i.r;
//     cout<<"\nEnter No. of years :";
//     cin>>i.n;
//     i.SI = ((i.p*i.r*i.n)/100);
//     cout<<"\nSimple Interest is "<<i.SI;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class twovarswap 
// {
//     public:
//     int a,b,c;
// };
// int main()
// {
//     twovarswap t;
//     cout<<"\n enter the value of a";
//     cin>>t.a;
//     cout<<"\n enter the value of b";
//     cin>>t.b;
//     t.c=t.a;
//     t.a=t.b;
//     t.b=t.c;
//     cout<<"\nAfter swap the value of a is:"<<t.a;
//     cout<<"\nAfter swap the value of b is:"<<t.b;

//     return 0;
// }    


//  WAP TO FIND Net Pay and Gross Pay from

// #include<iostream>
// using namespace std;
// class net_gross{
// public:
//     float basic,da,hra,gp,pf,np;
// };
// int main(){
//     net_gross ng;
//     cout<<"\n Enter the basic salary :";
//     cin>>ng.basic;
//     ng.da = ((ng.basic * 4)/100);
//     ng.hra=((ng.basic*10)/100);
//     cout<<"\n Net Pay is " << ng.da;
//     cout<<"\n HRA is " << ng.hra;
//     ng.gp=ng.basic+ng.da+ng.hra;
//     ng.pf=((ng.basic*9)/100);
//     ng.np=ng.gp-ng.pf;
//     cout<<"\n Net Pay is " << ng.np;
//     cout<<"\n Gross Pay is " << ng.gp;
// }

// WAP to find out whether given no. is odd or even.
// ( using IF )

// #include<iostream>
// using namespace std;
// class odd_even{
// public:
//     int num;
// };
// int main(){
//     odd_even oe;
//     cout<<"Enter the num:";
//     cin>>oe.num;
//     if(oe.num%2 == 0){
//         cout<< oe.num <<" is Even";
//     }
//     else{
//           cout<< oe.num <<" is Odd";
//     }
//     return 0;
// }

//  WAP to find out whether given no. is positive or
// negative.

// #include<iostream>
// using namespace std;
// class pos_neg{
// public:
//     int num;
// };
// int main(){
//     pos_neg pn;
//     cout<<"Enter the num:";
//     cin>>pn.num;
//     if(pn.num >= 1){
//         cout<<pn.num<<" is Positive";
//     }
//     else{
//         cout<<pn.num<<" is Negative";
//     }
//     return 0;
// }

// WAP to find out maximum. ( using IF .. else if …
// else if …. Else … )
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// int a,b;
// clrscr();
// printf("\n Enter two no's : ");
// scanf("%d%d",&a,&b);
// if(a>b)
// printf("a is max");
// else if(b>a)
// printf("b is max");
// else
// printf("both are same");
// getch();
// }

// #include<iostream>
// using namespace std;
// class maximum{
// public:
//     int a,b;
// };
// int main(){
//     maximum m;
//     cout<<"Enter the two number:\n";
//     cin>>m.a>>m.b;
//     if(m.a > m.b){
//         cout<<"a is max";
//     }
//     else if(m.b > m.a){
//         cout<<"b is max";
//     }
//     else{
//         cout<<"both are same";
//     }
//     return 0;
// }