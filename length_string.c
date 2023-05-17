#include <stdio.h>

int main()
{
    int i=0;
    char a[100];
    printf("Enter string A:\n");
    scanf("%[^\n]c",a);
    printf("%s\n",a);
    // Finding length
    while (a[i]){
        i++;
    }
    printf("Length of string:-  %d",i);
    return 0;
}
