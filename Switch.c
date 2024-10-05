#include<stdio.h>
int main(){
    printf("enter the value of a");
    int a;
    scanf("%d",&a);
    switch(a){
// use break statement otherwise it will print all the statement if it get one correct statement
        case 23:
        printf("you enterd 23\n");
        break;
         case 30:
         printf("you enterd 30\n");
         break;
         case  4535:
         printf("you enterd 35\n");
         break;
    }
}