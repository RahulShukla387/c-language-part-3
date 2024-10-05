#include<stdio.h>
int main(){
    
    printf("please enter your income in lakh");
    float income;
    scanf("%f",&income);
    if (income<2.5)
    {
        printf("your income tax is 0");
        /* code */
    }
    else if (income>=2.5&&income<5)
    {
        printf("you income tax is %f",(income-2.5)*0.05);
        /* code */
    }
    else if (income>=5&& income<10)
    {
        printf("your income tax is %f",(income-5)*0.2 + ((5-2.5)*0.05));
        /* code */
    }
    else if (income>=10)
    {
        printf("your income tax is %f",(income-10)*0.3 + (10-5)*0.2 + (5-2.5)*0.05);
        /* code */
    }
    return 0;
}
//Better way to do that program
// #include <stdio.h>

// int main() {
//     printf("Please enter your income in lakh: ");
//     float income;
//     scanf("%f", &income);

//     float tax;

//     if (income < 2.5) {
//         tax = 0;
//     } 
//     else if (income >= 2.5 && income < 5) {
//         tax = (income - 2.5) * 0.05;
//     } 
//     else if (income >= 5 && income < 10) {
//         tax = (income - 5) * 0.2 + (5 - 2.5) * 0.05;
//     } 
//     else if (income >= 10) {
//         tax = (income - 10) * 0.3 + (10 - 5) * 0.2 + (5 - 2.5) * 0.05;
//     }

//     printf("Your income tax is %.2f\n", tax);

//     return 0;
// }
