#include<stdio.h>
#define SIZE 10

int partition(int arr[],int l ,int h)
{
    int pivot = arr[h];
    int i=l;
    int j=l;
    int temp;

    for ( j = l; j < h; j++)
    {
        if(arr[j] < pivot)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }

    }
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; 

    return i;   

}

void quickSort(int arr[] , int l, int h)
{
    int mid;
    mid = partition(arr,l,h);
    if(l < h)
    {
        quickSort(arr,l,mid-1);
        quickSort(arr,mid+1,h);

    }
}

void display(int arr[])
{
    int i;
    printf("\n");
    for ( i = 0; i < SIZE; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    quickSort(arr,0,SIZE-1);
    display(arr);   
}