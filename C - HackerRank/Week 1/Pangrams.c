#include <stdio.h>
int main()
{
    char s[1000];
    int letters[26]={0};
    int isPangram=1;
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        char ch=tolower(s[i]);
        if(ch>='a'&&ch<='z')
        {
            letters[ch-'a']=1;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(letters[i]==0)
        {
            isPangram=0;
            break;
        }
    }
    if(isPangram)
    {
        printf("pangram");
    }
    else 
    {
        printf("not pangram");
    }
    return 0;
}
