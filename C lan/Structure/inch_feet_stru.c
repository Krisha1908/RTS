/*3. Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.
*/
#include<stdio.h>
struct distances
{
    float d1,d2,add;
};

int main()
{
    struct distances d[1];
    for (int i = 0; i < 1;i++)
    {
        printf("Enter the distances:\n ");
        scanf("%f", &d[i].d1);
        printf("Enter the distances:\n ");
        scanf("%f", &d[i].d2);
    }

    printf("\nD1 = %f \nD2= %f", d[0].d1, d[0].d2);
    printf("\nThe addition of two distances are : %.2f", d[0].d1 + d[0].d2);
}