#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60},temp;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i=i+2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("after swapping adjacent elements:");
    printf("\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
}