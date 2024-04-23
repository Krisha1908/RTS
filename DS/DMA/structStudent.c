#include<stdio.h>
#include<stdlib.h>
struct students
{
    char name[30];
    int c,cpp,java;
    float per;
};
int main()
{
    struct students *s;
    s = malloc(sizeof(struct students));

    printf("Enter the Name of Students : ");
    scanf("%s",s->name);
    printf("Enter the Marks of C , CPP ,JAVA : \n");
    scanf("%d%d%d",&s->c,&s->cpp,&s->java);

    s->per = (s->c + s->cpp + s->java) /3.0;
    printf("\nNAME = %s\n C = %d\n CPP = %d\n JAVA = %d\n PER = %f",s->name,s->c,s->cpp,s->java,s->per);

printf("\n");
    return 0;
}