/*
in a task,we need a take multiple 3 * 3 array from user .it is alaways a good idea to make a function for the task that we can do over and over
 again so,create a function taht scans a 3*3 array from the user & stores it.
*/

// #include<stdio.h>
// void add(int a[3][3])
// {
//     int i,j;

//     for(i=0;i<3;i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("\nEnter the elements:\n");
//             scanf("%d",&a[i][j]);
//         }
        
//     }
//     return 0; 
// }
// int main()
// {
//     int a[3][3],b[3][3],c[3][3];
//     int i,j;
//      add(a);
//      add(a);
//      add(a);
    
//     for(i=0;i<3;i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("\nThe Elements of a:\n");

//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
        
//     }
//     return 0;
// }


#include<stdio.h>

void scanarray(int *pBrr)
{
    int i,j;
    printf("\nEnter 9 elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",pBrr);
            pBrr++;
        }
    }
}
void printarray(int *pArr)
{
    int i,j, a[3][3],b[3][3];
    printf("\nElements of array:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*pArr);
            pArr++;
        }
        printf("\n");
    }
}
void Sizearray(int *size)
{
    printf("Enter the size of the array: ");
    scanf("%d",size);
}

int main()
{
    int a[3][3],b[3][3],i,j,*pa,*pb,size;
    pa = &a[0][0];
    pb = &b[0][0];
    getSize(&size);
    scanarray(pa);
    scanarray(pb);
    printarray(pa);
    printarray(pb);
    Sizearray(&size);
    
    printf("\n");
}





































































































































/*#include <stdio.h>

void array(int array[3][3]) {
    int i, j;
    for (i = 0; i <3; i++) {
        for (j = 0; j <3; j++) {
            printf("Enter element at position (%d, %d): ", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }
}

int main() {
    int user[3][3];
    array(user);

    printf("User entered array:\n");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", user[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/