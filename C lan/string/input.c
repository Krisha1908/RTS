// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int a[100];
//     printf("\nEnter the string:\n");
//     scanf("%s",&a);
//     printf("%s",a);
//     return 0;   
// }

#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[100];
    printf("\nEnter the string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("length of string = %d",i);
    return 0;
}