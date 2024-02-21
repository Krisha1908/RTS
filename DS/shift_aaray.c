// 10  20  30  40  50  
// shift=1 
// 20  30  40  50  10  





// 10  20  30  40  50  
// shift=3 
// 40  50  10  20  30



#include<stdio.h>
int main()
{

    int a[5];
    int i,shift,temp;
    printf("Enter the 5 elements\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    printf("\nEnter the Shift:");
    scanf("%d",&shift);

    for ( i = 0; i < shift; i++)
    {
        temp = a[0];
        for (int j = 0; j < 5; j++)
        {
           a[j] = a[j + 1];
        }
        a[4] = temp; 
        
    }
    
    printf("Rotated array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}