#include <stdio.h>
#include <string.h>
int main() {
    char s1[100];
    printf("Enter string1:\n");
    scanf("%[^\n]c",s1);
    char s2[100];
    printf("Enter string2:\n");
    scanf("%s",s2);
    int i,j,len;
    len=strlen(s1);
    for (i=len,j=0;s2[j];i++,j++){
        s1[i]=s2[j];
    }
    s1[i]=0;
    printf("%s",s1);
    return 0;
}
