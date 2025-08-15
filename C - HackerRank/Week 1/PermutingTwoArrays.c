#include<stdio.h>

void sortAsc(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }  
}

void sortDes(int b[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]<b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}

int main()
{
    int q;
    scanf("%d",&q);
    
    for(int i=0;i<q;i++)
    {
        int n,k,a[1000],b[1000];
        scanf("%d %d",&n,&k);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        sortAsc(a,n);
        sortDes(b,n);
        
        int yes=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]<k)
            {
                yes=0;
                break;
            }
        }
        if(yes)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}
