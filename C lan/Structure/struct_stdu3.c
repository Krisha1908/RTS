#include<stdio.h>
struct student
{
    int rollno;
    char name[30],city[30];
} s[3];

int main()
{
    int i,choice;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the roll no,name & city of student %d:\n",i+1);
        scanf("%d %s %s",&s[i].rollno,&s[i].name,&s[i].city);
    }

    printf("\nRoll no\tName\tCity\n");
    for(i=0;i<3;i++)
    {
        printf("\n%d\t%s\t%s",s[i].rollno,s[i].name,s[i].city);
    }

    printf("\n\nEnter your choice:\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("\n%d\t%s\t%s",s[0].rollno,s[0].name,s[0].city);
    }
    if(choice==2)
    {
        printf("\n%d\t%s\t%s",s[1].rollno,s[1].name,s[1].city);
    }
    if(choice==3)
    {
        printf("\n%d\t%s\t%s",s[2].rollno,s[2].name,s[2].city);
    }
    return 0;
}


































/*
#include<stdio.h>
struct student
{
    int rollno;
    char name[30],city[30];
} s[3];

int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the roll no,name & city of student %d:\n",i+1);
        scanf("%d %s %s",&s[i].rollno,&s[i].name,&s[i].city);
    }

    printf("\nRoll no\tName\tCity\n");
    printf("\n%d\t%s\t%s",s[1].rollno,s[1].name,s[1].city);

    return 0;
}
*/