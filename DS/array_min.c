#include<stdio.h>
#define SIZE 5

int main()
{
    int i,a[5];
    int min;

    printf("Enter the 5 elements\n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&a[i]);
    }

    min = a[0];
    for ( i = 0; i < SIZE; i++)
    {
        if (a[i]==0)
        {
            continue;
        
        
        if (min==0 || (min > a[i]))
        {
            min = a[i];
        }
        }
       
        
    }

    printf("MIN = %d",min);
    printf("\n");


    
}