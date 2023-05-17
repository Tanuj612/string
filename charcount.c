#include <stdio.h>

int main()
{
    int i=0,count=0;
    char a[100];
    printf("Enter string A:\n");
    scanf("%[^\n]c",a);
    char ch;
    printf("Enter the character to check how many times it appears:");
    scanf("%c",&ch);
    printf("%c",ch);
    
    
    // ch=getchar();
    
    
    // Finding length
    while (a[i]){
        if (a[i]==ch)
        count++;
        i++;
    }
    printf("Length of string:-  %d\n",i);
    if (count>0){
        if (count==1)
        printf("%c appears %d times in %s",ch,count,a);
        else 
        printf("%c appears %d times in %s",ch,count,a);
    }
    else 
    printf("%c did not appear in %s",ch,a);
    return 0;
}
