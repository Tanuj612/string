#include <stdio.h>

int main()
{
    char a[100];
    printf("Enter string A:\n");
    // scanf("%s",a);---->without space
    scanf("%[^\n]c",a);
    printf("%s",a);
    return 0;
}
