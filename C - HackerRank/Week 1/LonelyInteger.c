#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    int lonelyinteger=-1;
    for(int i=0;i<n-1;i+=2)
    {
        if(a[i]!=a[i+1])
        {
            lonelyinteger=a[i];
            break;
        }
    }
    
    if(lonelyinteger==-1)
    {
       lonelyinteger=a[n-1]; 
    }
    
    printf("%d",lonelyinteger);
    return 0;
}
