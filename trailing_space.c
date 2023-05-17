#include <stdio.h>
int main()
{
    char str[1000];
    printf("Enter any string: ");
    scanf("%[^\n]c",str);
    printf("\nString before trimming trailing white space: \n'%s'", str);
    int index, i;
    /* Set default index */
    index = -1;
    /* Find last index of non-white space character */
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index= i;
        }
        i++;
    }
    /* Mark next character to last non-white space character as NULL */
    str[index + 1] = '\0';
    printf("\n\nString after trimming trailing white spaces: \n'%s'", str);
    return 0;
}
