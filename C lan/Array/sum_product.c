#include<stdio.h>
int main()
{
    int matrix[3][3];
    int r,c,i,j,sum=0,product=1;

    printf("\nEnter the matrix elements\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nEnter the elements : \n");
            scanf("%d",&matrix[i][j]);
        }
        
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            sum += matrix[i][j];
            product *=matrix[i][j]; 
        }
        
    }

    printf("\nSum = %d",sum);
    printf("\nProduct = %d",product);
    
    
    return 0;
}