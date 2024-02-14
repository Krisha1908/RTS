#include <stdio.h>
void m(int a[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element of a: ");
            scanf("%d", &a[i][j]);
        }
    }
}
int main()
{
    int a[3][3],b[3][3],c[3][3];
    m(a);
    m(b);
    m(c);
    printf("\nUser entered array is \n");
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
