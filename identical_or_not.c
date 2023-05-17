#include <stdio.h>
#include <string.h>
int main() {
    char s1[100],d;
    printf("Enter string1:\n");
    scanf("%[^\n]c",s1);
    scanf("%c",&d);
    char s2[100];
    printf("Enter string2:\n");
    scanf("%[^\n]c",s2);
    int n = 0;
    int flag=1;
    while (s1[n] !='\0'){
        if (s1[n] != s2[n]){
            flag=0;
            break;
        }
        n++;
    }
    if (flag==1){
        printf("%s and %s are identical\n",s1,s2);
    }
    else {
        printf("%s and %s are not identical\n",s1,s2);
    }
    return 0;
}
