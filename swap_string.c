#include <stdio.h>
#include <string.h>
int main() {
    char s1[100];
    printf("Enter string1:\n");
    scanf("%[^\n]c",s1);
    char s2[100];
    printf("Enter string2:\n");
    scanf("%s",s2);
    char ch;
    int index = 0;
    printf("Before Swapping:\n");
    printf("Value of s1 -> %s \n",s1);
    printf("Value of s2 -> %s \n",s2);
    while (s1[index]){
        ch=s1[index];
        s1[index]=s2[index];
        s2[index]=ch;
        index++;
    }
    printf("After Swapping-> \n");
    printf("Value of s1 -> %s\n",s1);
    printf("Value of s2 -> %s\n",s2);
    return 0;
}
