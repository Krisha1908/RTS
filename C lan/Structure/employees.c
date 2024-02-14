/*
struct emp=id,name,salary,position(char)
    function 1 display
    function 2 create
    function 3 delete
    function 4 search
*/

#include<stdio.h>
struct employee
{
    int id,salary;
    char name[30],position[30];
}e[3];

int display(int choice)
{
    printf("\nEnter the choice:\n");
    scanf("%d",&choice);

    if(choice==1)
    {
         printf("\n%s\t%s\t%d\t%d",e[0].name,e[0].position,e[0].id,e[0].salary);
    }  
    if(choice==2)
    {
         printf("\n%s\t%s\t%d\t%d",e[1].name,e[1].position,e[1].id,e[1].salary);
    }  
    if(choice==3)
    {
         printf("\n%s\t%s\t%d\t%d",e[2].name,e[2].position,e[2].id,e[2].salary);
    }  

}
int search(int id)
{
    printf("\nEnter the ID:\n");
    scanf("%d",&id);

    if(id==1)
    {
         printf("\n%s\t%s\t%d\t%d",e[0].name,e[0].position,e[0].id,e[0].salary);
    }  
    if(id==2)
    {
         printf("\n%s\t%s\t%d\t%d",e[1].name,e[1].position,e[1].id,e[1].salary);
    }  
    if(id==3)
    {
         printf("\n%s\t%s\t%d\t%d",e[2].name,e[2].position,e[2].id,e[2].salary);
    }  

}

int delete(int id)
{
    printf("\nEnter the id:\n");
    scanf("%d",&id);
}

int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the information of employee - %d",i+1);
        printf("\nEnter the name:\n");
        scanf("%s",&e[i].name);
        printf("\nEnter the position:\n");
        scanf("%s",&e[i].position);
        printf("\nEnter the id:\n");
        scanf("%d",&e[i].id);
         printf("\nEnter the salary:\n");
        scanf("%d",&e[i].salary);
    }

    printf("\nName\tPosition\t\tid\t\tsalary");
    for(i=0;i<3;i++)
    {
        printf("\n%s\t%s\t\t%d\t\t%d",e[i].name,e[i].position,e[i].id,e[i].salary);
    }

    display("choice");
    delete("id");
    search("id");
    

    return 0;
}