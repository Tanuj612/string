#include <stdio.h>
#include <string.h>
int main() {
   char a[100];
   int i=0,c=0;
   scanf("%[^\n]c",a);
   char b[100];
   while(a[i]){
       c++;
       i++;
   }
    printf("\nPrinting in reverse:");
    for (i=c-1;i>=0;i--){
        printf("%c",a[i]);
    }
   return 0;
}
