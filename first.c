#include <stdio.h>
#include <string.h>
int main()
{
    //strings are character!!
    // char arr[5] = {'a','t','l','a','s'};
    // printf("%c",arr[1]);
    // // ch 1 byte -> 8 bits {256}
    // printf("%p\n",&arr[0]);
    // printf("%p\n",&arr[1]);
    // printf("%p\n",&arr[2]);
    // printf("%p\n",&arr[3]);
    // printf("%p\n",&arr[4]);
    // // difference of 1 byte!!
    
    // printing ascii value...
    // char ch ='9';
    // int x= (int) ch;
    // int y = int (ch); error!!
    // printf("%d",x);
    
    
    // null character --->>> \0 {ascii value = 0}
    // int x=0;
    // char a = (char)x; // 0 
    // printf("%c",a);
    
    
    // char a[]="Hello";
    // int i=0;
    // while (i<5){
    //     printf("%c",a[i]);
    //     i++;
    // }
    // ------------------------------OR-------------------
    // char a[]="Hello There I am doing coding\0";
    // int i=0;
    // while (a[i]!='\0'){
    //     printf("%c",a[i]);
    //     i++;
    // }
    // automatically last m \0 in above but in separate not \0 
    //  actual size = given + 1 .......
    // char b[12]= "Vidhi Ajmera";
    // int i=0;
    // while (b[i]!='\0'){
    //     printf("%c",b[i]);
    //     i++;
    // }
    // b[1]='e';
    // int i=0;
    // while (b[i]!='\0'){
    //     printf("%c",b[i]);
    //     i++;
    // }
    
    
    // gets m entire input puts m 1 word till spcae!! 
    
    //  INPUT OF STRING!!!!!!
    // char str[]= "College is best";
    // printf("%s",str);
    // puts (str);
    // char str[40];
    // scanf ("%[^\n]s",str);
    // printf("Your Input was : %s ",str);
    // // printing the size...
    // int size = 0;
    //  int k=0;
    //  while (str[k]!='\0')
    // {
    //     size++;
    //     k++;
    // }
    
    // printf("%d\n",size);
    //  for (int i=0,j=size-1 ; i<=j ;i++,j--){
    //      char temp = str [i];
    //      str[i] = str[j];
    //      str[j] = temp;
    //  }
    //  puts ("The reverse string is :");
    // puts (str);
    
    
    
    // char str[]= "College Wallah";
    // char *ptr = str;
    // printf("%p\n",&str[0]);
    // printf("%p\n",str);
    // //first vale k equal hota h !!! address 
    // // * vala value printf krege
    // printf("%c\n",*ptr); 
    // printf("%s",ptr);
    
    // // shallow copy
    // char s1[]="Physics Wallah";
    // char *s2=s1;
    // s1[0]='M';
    // printf("%s",s2);
    // //s2  is a shallow copy!!
    
    // //deep copy!!
    // char s1[]="Physics Wallah";
    // char s2[]="Physics Wallah";
    // s2[0]='M';
    // printf("%p\n",s1);
    // printf("%p",s2); 
    
    
    // // Insertion
    // char str[20]="College";
    // printf("%s\n",str);
    // // 2 index pr 'l';
    // for (int i=6;i>=2;i--){
    //     str [i+1] = str[i];
    // }
    // str[2]='k';
    // printf("%s",str);
    return 0;
}
