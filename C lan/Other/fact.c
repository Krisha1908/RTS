#include<stdio.h>
int main()
{
    int fact=1,num,i;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for (i=1 ;i <=num; i++)
    {
        fact=fact*i;
        
    }
    printf("fact = %d",fact);

    return 0;
}