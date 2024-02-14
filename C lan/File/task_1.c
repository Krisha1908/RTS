// // Ask 10 numbers from user, create 3 files: even.txt, odd.txt and prime.txt and store the numbers input by user in the appropriate file.
#include<stdio.h>
int main()
{
    int num, i,Prime = 1,j;
    FILE *odd, *even, *prime;
    odd = fopen("odd.txt", "a");    // a mode = append mode
    even = fopen("even.txt","a");
    prime = fopen("prime.txt","a");

    printf("\nEnter the 10 numbers:");
    for(i = 1; i <=10; i++)
    {
        scanf("%d", &num);
    

        if (num% 2 == 0) 
        {
            fprintf(even, "%d\n", num);
        }
        else 
        {
            fprintf(odd, "%d\n", num);
        }

         for(int j = 2; j*j <= num; j++)
        {
            if(num % j == 0) 
            {
                Prime = 0;
                break;
            }
        }
        if(Prime==1 && num > 1) 
        {
            fprintf(prime, "%d\n", num);
        }
    }
    fclose(odd);
    fclose(even);
    fclose(prime);
    return 0;
}


