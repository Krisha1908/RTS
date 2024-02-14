#include<stdio.h>
int GP(int a,int r,int n)
{
    if(n==1)
    {
        return a;
    }
    else
    {
        return GP(a,r,n-1) *r;
    }
}
int main()
{
    int ans,a,r,n;
    printf("Enter the first term:\n");
    scanf("%d",&a);
    printf("Enter the common ratio:\n");
    scanf("%d",&r);
    printf("enter the term:\n");
    scanf("%d",&n);
    ans = GP(a,r,n);
    printf("Ans = %d ",ans);
    return 0;
}

