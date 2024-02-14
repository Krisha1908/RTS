#include<stdio.h>
int main()
{
    int r,c,i,j;
    int matrix[3][3];
    printf("\nEnter the matrix elements\n");
  for(i=0;i<3;i++)
  {
    for ( j = 0; j <3; j++)
    {
        printf("Enter the elements");
        scanf("%d",&matrix[i][j]);
    }
  }

  for(i=0;i<3;i++)
  {
    for ( j = 0; j <3; j++)
    {
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
    
  }



    return 0;
}