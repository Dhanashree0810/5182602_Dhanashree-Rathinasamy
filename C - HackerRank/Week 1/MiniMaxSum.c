#include<stdio.h>

void miniMaxSum(int arr[])
{
    long totalsum=0;
    long minsum,maxsum;
    for(int i=0;i<5;i++)
    {
        totalsum+=arr[i];
    }
    minsum=maxsum=totalsum-arr[0];
    for(int i=1;i<5;i++)
    {
        long currentsum=totalsum-arr[i];
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
        if(currentsum<minsum)
        {
            minsum=currentsum;
        }
    }
    printf("%ld %ld",minsum,maxsum);
}




int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    miniMaxSum(arr);
    return 0;
}
