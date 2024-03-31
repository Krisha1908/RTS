#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int top = -1;
int stack[SIZE];

void push(int num)
{
    if(top == SIZE-1)
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}


void pop()
{
    int temp;
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOW\n");
    }
    else
    {
        temp = stack[top];
        top--;
    }
}


void display()
{
    int i;
    if(top==-1)
    {
        printf("\nSTACK EMPTY\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
    
}

int peek()
{
    return stack[top];
}

int main()
{
    int choice, num;
     int p;

    while (1)
    {
        printf("\n\n0.Exit\n1.PUSH\n2.DISPLAY\n3.POP\n4.PEEK\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the value you want to insert: \n");
            scanf("%d",&num);
            push(num);
            break;
            
        case 2:
            display();
            break;

        case 0:
            exit(0);

        case 3 :
            pop();
            break;
         case 4 :
            p = peek();
            printf("Peek = %d",p);   
            break;

        default:
            printf("\nENTER VALID CHOICE. PTA\n");
        }
    }
    
}