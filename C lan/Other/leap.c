#include<stdio.h>
void  main()
{
    int year;
    printf("\nEnter the year;\n");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("\nLeap year.");
    }
    else
    {
        printf("\nnot a leap year.");
    }
    
    
}