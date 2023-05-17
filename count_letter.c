#include <stdio.h>

int main()
{
    char a[100],c;
    int count=0;
    printf("Enter string:\n");
    scanf("%s",a);
    //For small Letter:
    
    for (c='a';c<='z' ;c++){
        count=0;
        for (int i=0;a[i];i++){
            if (c==a[i])
            count++;
        }
        if (count>0)
        printf("%c Found in %d times\n",c,count);
    }
    //For capital Letter:
    for (c='A';c<='Z' ;c++){
        count=0;
        for (int i=0;a[i];i++){
            if (c==a[i])
            count++;
        }
        if (count>0)
        printf("%c Found in %d times\n",c,count);
    }
    return 0;
}
