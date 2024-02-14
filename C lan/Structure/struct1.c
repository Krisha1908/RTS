/*
    date:15/08/23
    structure
*/




#include<stdio.h>
struct student
{
    int studentid,age;
    char name[30],city[30];
}s[3];

int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the %dst studentid , age , name & city:\n ",i+1);
        scanf("%d %d %s %s",&s[i].studentid,&s[i].age,&s[i].name,&s[i].city);
    }

    printf("\nstudentid\tage\tname\tcity\n");
    
    for(i=0;i<3;i++)
    {
        printf("\n%d\t\t%d\t%s\t%s",s[i].studentid,s[i].age,s[i].name,s[i].city);
    }

    return 0;
}



/*
#include<stdio.h>
struct student
{
    int studentid,age;
    char name[30],city[30];
}s1,s2,s3;

int main()
{
    printf("\nEnter the 1st studentid , age , name & city:\n ");
    scanf("%d %d %s %s",&s1.studentid,&s1.age,&s1.name,&s1.city);
    printf("\nEnter the 2nd studentid , age , name & city:\n ");
    scanf("%d %d %s %s",&s2.studentid,&s2.age,&s2.name,&s2.city);
    printf("\nEnter the 3rd studentid , age , name & city:\n ");
    scanf("%d %d %s %s",&s3.studentid,&s3.age,&s3.name,&s3.city);

    printf("\nstudentid\tage\tname\tcity\n");
    printf("\n%d\t\t%d\t%s\t%s",s1.studentid,s1.age,s1.name,s1.city);
    printf("\n%d\t\t%d\t%s\t%s",s2.studentid,s2.age,s2.name,s2.city);
    printf("\n%d\t\t%d\t%s\t%s",s3.studentid,s3.age,s3.name,s3.city);


    return 0;
}
*/