#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int *a,i;

    p = malloc(sizeof(int));
    printf("Enter the number : ");
    scanf("%d",p);
    printf("NUMBER = %d",*p);

    a = calloc(5,sizeof(int)); 
    for (i = 0; i <5; i++)
    {
        printf("\nEnter the number : ");
        scanf("%d",a+i);
    }

     for (i = 0; i <5; i++)
    {
        printf("\n%d",a[i]);
    }


    
    printf("\n");
}