#include<stdio.h>
#define SIZE 10

int a[] = {10,9,8,7,6,5,4,3,2,1};
void display()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("\t%d",a[i]);
    }
    
}

void selectionSort()
{
    int i,j,temp=0,min;
    for (i = 0; i < SIZE; i++)
    {
        for ( j = i+1,min=i; j < SIZE; j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        


        
    }
}

int main()
{
    printf("Array before Sorting : ");
    display();
    selectionSort();
   printf("\nArray after sorting : ");
    display();
    printf("\n");
    return 0;
}