#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],c,d;
    printf("Enter  the string : ");
    scanf("%[^\n]c",s);
    scanf("%c",&d);
    printf("Enter character: ");
    scanf("%c",&c);
    int i,k=0;
    for(i=0;s[i];i++)
    {
        s[i]=s[i+k];
     	if(s[i]==c)
     	{
		  k++;
		  i--;
		  }
    }
    printf("%s",s);
	return 0;
}
