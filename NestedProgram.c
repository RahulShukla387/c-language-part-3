#include<stdio.h>
int main(){
    int a = 1;
    int b = 0;
    // if(a&&b){
    //     printf("the value is true");
    // }
    // else if (a||b)
    // {
    //  printf("the value is printed by or operator"); 
    // }
    // The above can be done by using nesting
    if(a){
        if(b){
            printf("the value is true");
        }
    }
    if(a||b){ 
        printf("The value is printed by or operator");
    }
    }