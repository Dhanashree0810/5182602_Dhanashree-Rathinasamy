#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int primarysum=0;
    int secondarysum=0;
    
    for(int i=0;i<n;i++)
    {
       primarysum+=arr[i][i];
       secondarysum+=arr[i][n-1-i]; 
    }
    
    int difference=abs(primarysum-secondarysum);
    printf("%d",difference);
    return 0;
}
