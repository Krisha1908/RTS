#include<stdio.h>
scanArray(int *parr,int row , int col)
{
     int i,j;
     printf("Enter the number:");
     for(i = 0 ; i < row ; i++)
     {
        for(j = 0 ; j < col ; j++)
        {
            scanf("%d",parr);
            parr++;
        }
     }
}
printArray(int *par,int row,int col)
{
    int i,j;
    printf("Enter the elements of array:\n");
    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < col ; j++)
        {
            printf("%d\t",*par);
            par++;
        }
        printf("\n");
    }
}
int main()
{
    int a[10][10],b[10][10],i,j,*pa,*pb,row,col;
    printf("\nEnter the number for rows and cols of array A:\n ");
    scanf("%d %d",&row,&col);
    pa = &a[0][0];
    pb = &b[0][0];
    scanArray(pa,row,col);
    printArray(pa,row,col);

    printf("\nEnter the number for rows and cols of array B:\n ");
    scanf("%d %d",&row,&col);
    scanArray(pb,row,col);
    printArray(pb,row,col);
    return 0;
}