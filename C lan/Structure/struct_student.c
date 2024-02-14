/*4. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student in a tabular form.
eg:
RollNo  Chem    Maths   Phy     Percentage
1       75      85      50      70
*/

#include<stdio.h>
struct student
{
    int roll,phymark,chemark,maths,age;
    float per;
    char name[30];
}s[3];

int main()
{
    int i,sum;
    for(i=0;i<3;i++)
    {
        printf("\n\nEnter the information of student %d\n",i+1);
        printf("enter roll no of student %d:\n",i+1);
        scanf("%d",&s[i].roll);
        printf("enter the che marks of student %d:\n",i+1);
        scanf("%d",&s[i].chemark);
        printf("enter the maths marks of student %d:\n",i+1);
        scanf("%d",&s[i].maths);
        printf("enter the phymark marks of student %d:\n",i+1);
        scanf("%d",&s[i].phymark);  

        s[i].per = ((s[i].chemark+s[i].maths+s[i].phymark)*100)/300;
    } 


    
    printf("\n\nRoll no\tche\tmaths\tphy\tper");
    for(i=0;i<3;i++)
    {       
        printf("\n%d\t%d\t%d\t%d\t%f",s[i].roll,s[i].chemark,s[i].maths,s[i].phymark,s[i].per);
    }
    return 0;
}
























/*
1. Write a program to store and print the roll no., name , age and marks of a student using structures.
*/

/*#include<stdio.h>
struct student
{
    int roll,phymark,chemark,maths,age;
    char name[30];
}s[3];

int main()
{
    int i,sum;
    float per;
    for(i=0;i<3;i++)
    {
        printf("\n\nEnter the information of student %d",i);
        printf("\nenter roll no of student %d:\n",i);
        scanf("%d",&s[i].roll);
        printf("\nenter the maths marks of student %d:\n",i);
        scanf("%d",&s[i].maths);
        printf("\nenter the phymark marks of student %d:\n",i);
        scanf("%d",&s[i].phymark);
        printf("\nenter the age of student %d:\n",i);
        scanf("%d",&s[i].age);
    
         
    } 

    
    printf("\n\nRoll no\tphysics\tmaths\tage");
    for(i=0;i<3;i++)
    {       
        printf("\n%d\t%d\t%d\t%d",s[i].roll,s[i].phymark,s[i].maths,s[i].age);
    }
    return 0;
}
*/
//2. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. given by user.*/
/*
#include<stdio.h>
struct student
{
    int roll,phymark,chemark,maths,age;
    char name[30];
}s[3];

int main()
{
    int i,sum,choice;
    float per;
    for(i=0;i<3;i++)
    {
        printf("\n\nEnter the information of student %d",i+1);
        printf("\nenter roll no of student %d:\n",i+1);
        scanf("%d",&s[i].roll);
        printf("\nenter the maths marks of student %d:\n",i+1);
        scanf("%d",&s[i].maths);
        printf("\nenter the phymark marks of student %d:\n",i+1);
        scanf("%d",&s[i].phymark);
        printf("\nenter the age of student %d:\n",i+1);
        scanf("%d",&s[i].age);
    
         
    } 

    
    printf("\n\nRoll no\tphysics\tmaths\tage");
    for(i=0;i<3;i++)
    {       
        printf("\n%d\t%d\t%d\t%d",s[i].roll,s[i].phymark,s[i].maths,s[i].age);
    }

     printf("\n\nEnter your choice:\n");
    scanf("%d",&choice);

    if(choice==1)
    {
             printf("\n%d\t%d\t%d\t%d",s[0].roll,s[0].phymark,s[0].maths,s[0].age);
    }
    if(choice==2)
    {
         printf("\n%d\t%d\t%d\t%d",s[1].roll,s[1].phymark,s[1].maths,s[1].age);
    }
    if(choice==3)
    {
         printf("\n%d\t%d\t%d\t%d",s[2].roll,s[2].phymark,s[2].maths,s[2].age);
    }
    return 0;
}


*/


































//s[i].per = (s[i].phymark + s[i].chemark + s[i].maths) / 3;
       //   printf("\nper of student %d = %.2f",i+1,per);