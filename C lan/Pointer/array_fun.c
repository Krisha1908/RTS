#include<stdio.h>
void array();
int main()
{
   int a[5],num;
   printf("\nEnter the number:\n");
   scanf("%d",&num);
   array(a,num);
}
void array(int a[],int num)
{
   int i;

   printf("\nEnter the number:\n");
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);
   }
    for(i=0;i<num;i++)
   {
       printf("%d",a[i]);
       
   }
}


// write a program to create a link list with three row storing a data 10,30,34
// and display the link list