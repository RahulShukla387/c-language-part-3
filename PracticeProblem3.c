#include<stdio.h>
int main (){
    int year;
    printf("enter the year you want to check");
    scanf("%d",&year);
    
if (year%4 == 0 && year/100 !=0)
{
   printf("The year is leap year"); /* code */
}
else
{
   printf("not leap year"); /* code */
}

}