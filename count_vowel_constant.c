#include <stdio.h>
int main() {
   int vowel=0 , consonant=0 , i;
   char a[20];
   scanf("%[^\n]c",a);
   for (i=0;a[i];i++){
       if (a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122){
            if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
           vowel++;
       }
       else 
       consonant++;
   }
   }
   printf("Number of Vowels and consonants in the given string are : %d and %d",vowel,consonant);
   
   return 0;
}
