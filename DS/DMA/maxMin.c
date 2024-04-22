#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b,*c;
    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    printf("\nEnter the value of A : ");
    scanf("%d",a);
    printf("\nEnter the value of B : ");
    scanf("%d",b);
    printf("\nEnter the value of C : ");
    scanf("%d",c);

    printf("A = ",a);
    printf("B = ",b);
    printf("C = ",c);

    if(*a>*b)
    {
        if(*a>*c)
        {
            printf("\n A is Greater");
        }
        else
        {
            printf("C is Greater");
        }
    }
    else
    {
        if(*b>*c)
        {
            printf("B is Greater");
        }
        else
        {
            printf("C is Greater");
        }

    }

    printf("\n");
    
}