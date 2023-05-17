
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
int main()
{
    char x, str[MAX_SIZE];
    char word[MAX_SIZE];
    int count;
    printf("Enter any string: ");
    scanf("%[^\n]c",str);
    scanf("%c",&x);
    printf("Enter word to search occurrences: ");
    scanf("%[^\n]c",word);

    int i, j, found;
    int strLen, wordLen;

    strLen = strlen(str);     
    wordLen = strlen(word); 

   for(i=0; i<strLen - wordLen; i++)
    {
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
        {
            printf("'%s' found at index: %d \n", word, i);
        }
    }

    return 0;
}
