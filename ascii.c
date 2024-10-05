#include<stdio.h>
int main(){
      char ch ;
    printf("enter the value of character");
    scanf("%c",&ch);
   printf("The character is %c\n",ch);
   printf("The value of character is %d\n",ch);
   if (ch>96 && ch<=127)
   {
    printf("the character is lower case\n");
   }
   else
   {
   printf("the character is not lower case");
   }
   return 0; 
}