#include <stdio.h>
#include <string.h>
int main() {
   char str[100];
   printf("Enter string:\n");
   scanf("%s",str);
   char temp;
   int i,j;
   int n=strlen(str);
   printf("String before Sorting - %s\n",str);
   
   for (i=0;i<n-1;i++){
       for (j=i+1;j<n;j++){
           if (str[i]>str[j]){
               temp = str[i];
               str[i] = str[j];
               str[j] = temp;
           }
       }
   }
   printf("String after sorting - %s",str);
   return 0;
}
