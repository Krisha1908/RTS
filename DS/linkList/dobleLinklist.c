#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*last=NULL;

void addNode(int num)
{
    struct node *temp = NULL;
    if(head==NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        last->prev = head;
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

int main()
{
    addNode(100);
    addNode(200);
    addNode(300);
display();
    // printf("%d %d %d",head->data,head->prev->data,head->prev->prev->data);

    printf("\n");

}