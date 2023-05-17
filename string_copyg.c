#include <stdio.h>
#include <string.h>
int main() {
   char a[100];
   int i;
   scanf("%[^\n]c",a);
   char b[100];
   for ( i=0;a[i];i++){
       b[i]=a[i];
   }
   b[i]='\0';
   printf("The copy of string a is \n");
   printf("%s",b);
   
   return 0;
}
