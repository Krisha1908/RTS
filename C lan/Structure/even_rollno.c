/*
5. Write a structure to store the roll no., age (between 11 to 14) and marks of students. Store the information in structure.
1 - Print the roll numbers of all the students having age 14.
2 - Also print the marks of all the students having even roll no.

*/


#include<stdio.h>
struct student
{
    int roll,age,mark;
}s[3];

int main()
{
    struct student s[3];
    int i;
    for ( i = 0; i <3; i++)
    {
        printf("\nEnter the information of student %d\n",i+1);
        printf("Enter the Roll no of student %d:\n ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the Age of student %d:\n ",i+1);
        scanf("%d",&s[i].age);
        printf("Enter the mark of student %d:\n ",i+1);
        scanf("%d",&s[i].mark);
    }

        printf("\nRollno\tAge\tmark");
    for(i=0;i<3;i++)
    {
        printf("\n%d\t%d\t%d",s[i].roll,s[i].age,s[i].mark);
    }

    for(i=0;i<3;i++)
    {
        if(s[i].age==14)
        {
            printf("\n\nAge==14:%s",s[i].roll);
        }
    } 

    for (i=0; i<3; i++)
    {
        if(s[i].roll%2==0)
        {
            printf("\n\nEven Roll no:%s",s[i].mark);
        }
    }
      
    
}




























/*
structure emp 
roll no 
age 
name 
address
1.age > 14 display name
2. roll no even  display name
*/
/*
#include<stdio.h>
struct student
{
    int roll,age;
    char name[30],add[30];
}s[3];

int main()
{
    int i;
    for ( i = 0; i <3; i++)
    {
        printf("\nEnter the Name,Roll no,Age & address of student %d:\n ",i+1);
        scanf("%s %d %d %s",&s[i].name,&s[i].roll,&s[i].age,&s[i].add);
    }

        printf("\nName\tRollno\tAge\taddress ");
    for(i=0;i<3;i++)
    {
        printf("\n%s\t%d\t%d\t%s",s[i].name,s[i].roll,s[i].age,s[i].add);
    }

    for(i=0;i<3;i++)
    {
        if(s[i].age>14)
        {
            printf("\n\nAge > 14:%s",s[i].name);
        }
    } 

    for (i = 0; i <3; i++)
    {
        if(s[i].roll%2==0)
        {
            printf("\n\nEven Roll no:%s",s[i].name);
        }
    }
      
    
}
*/