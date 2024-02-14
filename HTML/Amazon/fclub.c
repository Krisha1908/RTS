#include<stdio.h>
#include<conio.h>
void main();
{
    int no1,no2;
    clrscr();
    printf("enter the first number");
    scanf("%d",no1);
    printf("enter the second number");
    scanf("%d",no2);
    if(no1>no2){
        printf("\nthe no1 is the bigger");
    }
    else{
        printf("\nthe no2 is the bigger");
    }
    getch();
}