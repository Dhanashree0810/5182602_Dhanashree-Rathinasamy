#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    
    for(int i=0;i<q;i++)
    {
        unsigned int n;
        scanf("%u",&n);
        unsigned int flipped=~n;
        printf("%u\n",flipped);
    }
    return 0;
}
