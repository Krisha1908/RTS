#include<stdio.h>
#include<stdlib.h>

int graph[4][4];

int main()
{
    int i,j,node;
    for (i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("\n%d is connectes with %d ",i,j);
            scanf("%d",&graph[i][j]);
        }
        
    }

    node = 0;

    for ( i = 0; i < 4; i++)
    {
        if (graph[node][i]==1)
        {
            printf(" %d",i);
        }
        
    }

    return 0;
    
    
}   