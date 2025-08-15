#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char s[1000],t[1000];
    scanf("%s",s);
    scanf("%s",t);
    int length=strlen(s);
    for(int i=0;i<length;i++)
    {
        if(s[i]==t[i])
        {
            printf("0");
        }
        else
        {
             printf("1");
        }
    }
    printf("\n");
    return 0;
}
