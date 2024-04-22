#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b;
    int *sum;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    sum = malloc(sizeof(int));
    printf("\nEnter Value of A : ");
    scanf("%d",a);
    printf("\nEnter Value of B : ");
    scanf("%d",b);

    printf("A = %d",*a);
    printf("\nB = %d",*b);


    *sum = *a + *b;
    printf("\nADD = %d",*sum);

    printf("\n");

}