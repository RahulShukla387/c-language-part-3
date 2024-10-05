#include<stdio.h>
int main(){
    int a = 60;
    if (a<18)
    {
        printf("sorry you are not elligible to run your vehicle");/* code */
    }
    // if we give multiple else if value then when it will get its first true statement it will direct go to the last 
    else if (a==18)
    {
     printf("congratulation you get a special gift of drivery license on this birthday");   /* code */
    }
else if (a>30){
printf("you are elligible");
}
else if (a<65){
    printf("It will not printed");
}
    else{
        printf("you are elligible to run your vehicle");
    }
}