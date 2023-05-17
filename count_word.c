/**
 * C program to count occurrences of a word in a given string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
int main()
{
    char x, str[MAX_SIZE];
    char toSearch[MAX_SIZE];
    int count;

    /* Input string and word from user */
    printf("Enter any string: ");
    scanf("%[^\n]c",str);
    scanf("%c",&x);
    printf("Enter word to search occurrences: ");
    scanf("%[^\n]c",toSearch);

    int i, j, found;
    int stringLen, searchLen;

    stringLen = strlen(str);      // length of string
    searchLen = strlen(toSearch); // length of word to be searched

    count = 0;

    for(i=0; i <= stringLen-searchLen; i++)
    {
        /* Match word with string */
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            count++;
        }
    }


    printf("Total occurrences of '%s': %d", toSearch, count);

    return 0;
}
