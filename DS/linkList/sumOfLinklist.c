#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL,*last = NULL;

void addNode(int num)
{
    struct node *temp;
    if(head==NULL)
    {    head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display()
{
    struct node *p;
    if(p==NULL)
    {
        printf("\nLinklist Empty");
    }
    else
    {
        p=head;
        while (p != NULL)
        {
            printf("%d ",p->data);
            p = p->next;
           
        }
        
    }
}

void sum()
{
    int sum=0;
    struct node *p = head;
   
    while(p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
     printf("\nSUM = %d",sum);

       
}
int main()
{   
   
    addNode(100);
    addNode(200);
    addNode(300);
    display();
    sum();

    printf("\n");
   return 0; 
}