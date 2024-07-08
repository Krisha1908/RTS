#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
    struct node *height;
};

struct node* addNode(struct node *root,int data)
{
    if(root==NULL)
    {
        root = malloc(sizeof(struct node));
        root->data =data;
        root->right=NULL;
        root->left=NULL;
        // return root;
    }
    else if(data > root->data)
    {
       struct node *temp = malloc(sizeof(struct node));
        temp->data =data;
        temp->right=NULL;
        temp->left=NULL;
        root->right=temp;
    }
    else
    {
     struct node *temp = malloc(sizeof(struct node));
        temp->data =data;
        temp->right=NULL;
        temp->left=NULL;
        root->left=temp;
    }
    return root;
};

int calculateHeight(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if(root->left!= NULL)
    {
        lh = root->left->height;
    }
    if(root->right!= NULL)
    {
        rh = root->right->height;
    }

    if(lh > rh)
    {
        return lh + 1;
    }

    else
    {
        return rh + 1;
    }


}

void inOrder()
{
    
}

int main()
{
    struct node *root = NULL;
    // root = malloc(sizeof(struct node));
    root = addNode(root,30);
    addNode(root,20);
    addNode(root,40);




    // printf("%d %d %d",root->data,root->left->data,root->right->data);
    // printf("\n");
}