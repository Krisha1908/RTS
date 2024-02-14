#include<stdio.h>
int main()
{
    int day;
    printf("\nEnter the number of day:\n");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("\nMon");
        break;
    case 2:
        printf("\nTues");
        break;   
     case 3:
        printf("\nWed");
        break;   
     case 4:
        printf("\nThurs");
        break;  
     case 5:
        printf("\nfri");
        break;      
     case 6:
        printf("\nsatur");
        break;  
     case 7:
        printf("\nsun");
        break;                       
    
    default:
    printf("\nYou enter wrong number");
        break;
    }
    return 0;
}