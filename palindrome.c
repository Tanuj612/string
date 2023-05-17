#include <stdio.h>
#include <string.h>
int main()
{
    int f=0;
    char s[100];
    printf("Enter a string:\n");
    scanf("%s",s);
    int length=strlen(s);
    for (int i=0;i<length;i++){
        if (s[i] != s[length-i-1])
        f=1;
    }
    if (f){
        printf("Not plaindrome");
    }
    else {
        printf("Palindrome");
    }
    return 0;
}
