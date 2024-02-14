/*
6. Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
1 - Print the account number of all the customers having balance less than $200.
2 - Add interest amount of $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

*/
#include<stdio.h>
struct account
{
    int accnum,balance,add;
    char name[30];
}a[3];

int main()
{
    int i,add;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the account number,balance name of person %d:\n ",i+1);
        scanf("%d %d %s",&a[i].accnum,&a[i].balance,&a[i].name);
    }

    printf("\n\nAcNum\tBalance\tName\n");
    
    for(i=0;i<3;i++)
    {
        printf("\n%d\t\t%d\t%s",a[i].accnum,a[i].balance,a[i].name);
    }

for(i=0;i<3;i++)
{
    if(a[i].balance<200)
    {
        printf("\n\nbalance<200");
        printf("\n\n%d\t\t\t%d\t\t%s",a[i].accnum,a[i].balance,a[i].name);
    }
    else if (a[i].balance>=1000)
    {
        printf("\n\nbalance>=1000");
        printf("\n\n%d\t\t\t%d\t\t%s",a[i].accnum,a[i].balance,a[i].name);  
        a[i].add=a[i].balance+100;
        printf("\nUpdated balance = %d",a[i].add);

    }
    
}
    return 0;
}
