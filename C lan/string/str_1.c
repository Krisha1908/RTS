//string 1st
//strlen
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\nEnter:\n");
    gets(str);
    int length=strlen(str);
    printf("\nEnter:\n");
    //scanf("%s",&str);
    printf("\nlength:%d",length);

    return 0;
}
*/

//strcmp

/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ing[100];
    printf("\nEnter:\n");
    gets(str);
    printf("\nEnter 2:\n");
    gets(ing);
    if(strcmp(str,ing)==0)
    {
        printf("\nboth are same");
    }
    else
    {
        printf("\ndifferent");
    }

}*/

//strcpy
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("\nEnter:\n");
    gets(str1);
    strcpy(str2,str1);
    printf("%s",str2);
   
    return 0;
}*/


//Reversed string
/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("\nEnter the string:\n");
    scanf("%s",&a);
    strrev(a);
    printf("\nReversed string:%s",a);
    return 0;
}
*/

//length of string without strlen
/*#include<stdio.h>
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
*/

//concate
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("\nEnter the first string:\n");
    scanf("%s",&str1);
    printf("\nEnter the second string:\n");
    scanf("%s",&str2);
    strcat(str1,str2);
    printf("\nThe concate of two string is : %s",str1);
    return 0;
}
*/

//Concate without concat function
//wrong
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j;
    printf("\nEnter the first string:\n");
    scanf("%s",&str1);
    printf("\nEnter the second string:\n");
    scanf("%s",&str2);
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str1[j]!='\0';j++)
        {
            str1[i]=str2[i];
            i++;
        }
        
    }   
     str1[i]='\0';
    printf("\nThe concate of two string is : %s %s",str1,str2);
    return 0;
}
*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,len1,len2;
    printf("\nEnter the first string:\n");
    gets(str1);
    printf("\nEnter the second string:\n");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);

    for(i=0;i<=len2;i++)
    {
        str1[len1 + i] = str2[i];
    }
    printf("\nstring : %s ",str1);
}*/

//ascii value of char
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str1[100];
    printf("\nEnter the string:\n");
    gets(str1);
    for(i=0;i<strlen(str1);i++)
    {
        printf("%c\t%d\n",str1[i],str1[i]);
    }
    return 0;
}
*/


//file mang

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   FILE *ptr = NULL;
   char ch;
   char str[10];
   ptr=fopen("krisha.txt","r");
   if(ptr==NULL)
   {
        printf("error");
        exit(1);
   } 
   printf("entrr the word to append");
   gets(str);
   fputs(str,ptr);
   printf("Successfull");
    fclose(ptr);
    return 0;
}
