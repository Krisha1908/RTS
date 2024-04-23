#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,sum=0;
    p = calloc(sizeof(int),5);
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&p[i]);
    }
    //  for ( i = 0; i < 5; i++)
    // {
    //     printf("%d\t",p[i]);
    // }

     for ( i = 0; i < 5; i++)
    {
        sum+=p[i];
    }
    printf("\nSUM = %d",sum);
    
    printf("\n");
}