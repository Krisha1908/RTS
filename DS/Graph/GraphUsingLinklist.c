#include<stdio.h>
struct edge
{
    int src;
    int dest;
};

int main()
{
    struct edge e[10];
    int s,d,totalEdges,i;
    printf("\nHOw many Edges you want to add? : ");
    scanf("%d",&totalEdges);

    for ( i = 0; i < totalEdges; i++)
    {
        printf("\nEnter the Source and Destination : ");
        scanf("%d %d",&s,&d);

        e[i].src = s;
        e[i].dest = d;
    }

    for ( i = 0; i <totalEdges; i++)
    {
        printf("\n%d is connected With %d",e[i].src,e[i].dest);
    }
    
    printf("\n");

    return 0;
}