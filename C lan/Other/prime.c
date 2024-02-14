#include<stdio.h>
int main()
{
    int i, num,counter = 0;
    printf("\nenter the number:\n");
    scanf("%d",&num);
        for(i=1; i<num; i++)
        {    
            if(num%i==0)
            {
                counter++;
            }
        }
        if(counter == 2)
        {
            printf("prime number.");
        }
        else
        {
            printf("not prime number.");
        }
        return 0; 
}

