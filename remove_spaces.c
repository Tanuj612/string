#include <stdio.h>

int main()
{
    int i,len = 0,j;  
    char str[100];  
    scanf("%[^\n]c",str);
    
    len = sizeof(str)/sizeof(str[0]);  
    for(i = 0; i<len; i++){  
        if(str[i] == ' '){  
            for (j=i ; j<len ; j++)
        {  
            str[j]=str[j+1] ;  
        }  
        len--;  
        }  
    }  
    printf("String after removing all the white spaces : %s", str); 
    return 0;
}
