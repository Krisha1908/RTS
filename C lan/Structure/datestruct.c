/*
Write a program to compare two dates entered by user. Make a structure named Date to store the elements day,
 month and year (all integers) to store the dates.
 If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal

*/

#include<stdio.h>
struct date
{
    int date,month,year;
}d[2];

int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nEnter the date:\n ");
        scanf("%d  %d  %d",&d[i].date,&d[i].month,&d[i].year);
    }

    for(i=0;i<2;i++)
    {
        printf("\n%d - %d - %d",d[i].date,d[i].month,d[i].year);
    }   

    if(d[0].date==d[1].date && d[0].month==d[1].month && d[0].year==d[1].year)
    {
        printf("\nDates are equal");
    }
    else 
    {
        printf("\nDates are not equal");   
    }
    
    return 0;
}