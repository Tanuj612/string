#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    printf("Enter string:\n");
    scanf("%[^\n]c",string);
    int a, d, o, i;
    a = d = o = i = 0;
    while(string[i]!='\0')
    {
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {
            a++;
        }
        else if(string[i]>='0' && string[i]<='9')
        {
            d++;
        }
        else
        {
            o++;
        }
        i++;
    }
    printf("Alphabets = %d\n", a);
    printf("Digits = %d\n", d);
    printf("Special characters = %d\n", o);
    return 0;
}
