#include<stdio.h>

void countingSort(int n,int arr[],int result[])
{
   for(int i=0;i<100;i++)
   {
    result[i]=0;
   } 
   for(int i=0;i<n;i++)
   {
    int value=arr[i];
    result[value]++;
   }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result[100];
    countingSort(n,arr,result);
    
    for(int i=0;i<100;i++)
    {
        printf("%d ",result[i]);
    }
    return 0;
}


