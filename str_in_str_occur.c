#include <stdio.h>
#include <string.h>
int main() {
   char s1[100];
   printf("Enter a string1:\n");
   scanf("%[^\n]c",s1);
   char s2[10];
   printf("Enter the subset of string1:\n");
   scanf("%s",s2);
   int n=0,m=0,times=0;
   int len = strlen(s2);
   while (s1[n] !='\0'){
       if (s1[n]==s2[m]){
           while (s1[n] == s2[m] && s1[n] != '\0'){
               n++;
               m++;
           }
           if (m == len && (s1[n]== ' ' || s1[n] == '\0')){
               times++;
           }
       }
       else {
           while (s1[n] != ' '){
               n++;
               if (s1[n] == '\0')
               break;
           }
       }
       n++;
       m=0;
   }
   if (times>0){
       printf("%s appears %d times\n",s2,times);
   }
   else{
       printf("%s does not appear in the sentence\n",s2);
   }
   return 0;
}
