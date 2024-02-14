// Write a C program that takes user defined integers from user, store them in an array using pointer &then reverse the array using pointers.
#include<stdio.h>
void main()
{
    int arr[100],temp = 0,n,i,j;
    printf("Enter a number of size: ");
    scanf("%d", &n);
    int *pl = &arr[n - 1], *pf = &arr[0];
    for (i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d",pf);
        pf++;
    }
    printf("\n");
    pf = &arr[0];
    for (i = 0; i < n; i++)
    {
        printf("Enter a number: %d\n",arr[i]);
    }
    
    
    for (i = 0; i < n/2; i++)
    {
        temp = *pf;
        *pf = *pl;
        *pl = temp;
        pf++;
        pl--;
    }
    
    printf("Reversed Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Entered number is: %d\n",arr[i]);
    }
}