#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char str[100];
    printf("Enter string:\n");
    scanf("%[^\n]c",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
    }
    printf("String in Lowercase: %s",str);
    /* To print string in upperCase*/
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("\n\nString in Uppercase: %s",str);
    return 0;
}
