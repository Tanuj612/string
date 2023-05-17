#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%[^\n]c",s);
    for (int i=0;s[i];i++){
        if (s[i]>=65 && s[i]<=90)
{
    s[i]+=32;
}    
        else if (s[i]>=97 && s[i]<=122){
            s[i]-=32;
        }
    }
    printf("%s",s);
    return 0;
}
