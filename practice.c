// practice q 1
#include<stdio.h>
int main(){
    printf("enter the value of sub1");
    int sub1;
    scanf("%d",&sub1);
    
    printf("enter the value of sub2");
    int sub2;
    scanf("%d",&sub2);
    printf("enter the value of sub3");
    int sub3;
    scanf("%d",&sub3);
    // if (sub1>=33)
    // {printf("you are passed in sub1");
    //     /* code */
    // }
    // else{
    //     printf("you are fail in sub1");
    // }
    // if (sub2>=33)
    // {printf("you are passed in sub2");
    //     /* code */
    // }
    // else{
    //     printf("you are fail in sub2");
    // }
    // if (sub3>=33)
    // {printf("you are passed in sub3");
    //     /* code */
    // }
    // else{
    //     printf("you are fail in sub3");
    // }
    // switch (sub1||sub2||sub3)
    // {
    // case1: sub1||sub2||sub3<=33 ;
    // printf("you are fail");
    //     break;
    // }
    if(sub1 || sub2|| sub3<=33){
        printf("you are fail bro");
    }
    if (sub3+sub2+sub1>=120)
    {printf("you are passed in all subject");
        /* code */
    }
    else{
        printf("you are fail in overall");
    }
return 0;
}