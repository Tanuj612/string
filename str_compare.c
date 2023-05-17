#include <stdio.h>
#include <string.h>
int main() {
    char s1[100];
    printf("Enter string1:\n");
    scanf("%[^\n]c",s1);
    char s2[100];
    printf("Enter string2:\n");
    scanf("%s",s2);
    int k = strcmp(s1,s2);
    if (k==0) printf("Strings are Equal.\n");
    else if (k>0) printf("S1 is greater than S2.\n");
    else printf("S1 is less than S2.\n");
    return 0;
}
