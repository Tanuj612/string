#include <stdio.h>
#include <string.h>
 
int main()
{
    char d,s[1000],c;  
    int i,n,k=0;
 
    printf("Enter  the string : ");
    scanf("%[^\n]c",s);
    scanf("%c",&d);
    printf("Enter character to be searched: ");
    scanf("%c",&c);
    
    for(i=strlen(s)-1;i>=0;i--)  
    {
    	if(s[i]==c)
    	{
		  k=1;
    	  break;
		}
 	}
    if(k)
 	    printf("character  %c  is last occurrence at location:%d ",c,i);
    else
        printf("character is not in the string ");
 
 	 
     
    return 0;
}
