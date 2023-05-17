#include <stdio.h>
int main()
{char str[1000];
    printf("Enter any string: ");
    scanf("%[^\n]c",str);
    printf("\nString before trimming leading whitespace: \n%s", str);
    int index, i, j;
    index = 0;
    /* Find last index of whitespace character */
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }
    if(index != 0)
    {/* Shift all trailing characters to its left */
        i = 0;
        while(str[i + index] != '\0')
        {
            str[i] = str[i + index];
            i++;
        }
        str[i] = '\0'; // Make sure that string is NULL terminated
    }
    printf("\n\nString after trimming leading whitespace: \n%s", str);
    return 0;
}
