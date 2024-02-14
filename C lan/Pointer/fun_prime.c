// Write a function that determines whether the integer given in its argument is a prime number or not.
/*
#include<stdio.h>
int prime(int num)
{
    int flag = 0;
    for (int j = 2; j < num; j++)
    {
        if (num % j == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0 && num > 1)
    {
        printf("\n%d num is prime", num);
    }
    else
    {
        printf("\n%d num is not prime", num);
    }
}

int main()
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    prime(num);

    return 0;
}*/

// #include<stdio.h>
/*int prime(int num)
{
     int i, counter = 0;
         for(i=2;i<num;i++)
        {    
            if(num%i==0)
            {
                counter++;
            }
        }
        if(counter==0 && num>1)
        {
            printf("prime number.");
        }
        else
        {
            printf("not prime number.");
        } 
}
void main()
{
    int num,ans=0;
    printf("enter the num:");
    scanf("%d",&num);
    prime(num);
}*/












/*
#include <stdio.h>

int isPrime(int n) 
{
    if (n <= 1) {
        return 0; 
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    
    return 1;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}*/
