#include<stdio.h>
void timeConversion(char s[])
{
    int hour;
    hour=(s[0]-'0')*10+(s[1]-'0');
    if(hour==12&&s[8]=='A')
    {
        hour=0;
    }
    if(hour!=12&&s[8]=='P')
    {
        hour+=12;
    }
    printf("%02d:%c%c:%c%c",hour,s[3],s[4],s[6],s[7]);
}
int main()
{
    char time[11];
    scanf("%s",time);
    timeConversion(time);
    return 0;
}
