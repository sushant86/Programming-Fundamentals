/*
student name: sushant aryal
subject:programming fundamentals
roll no:17
lab sheet:06
date:2016/10/25
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,sum,subtraction,multiplication,division,modulus;
    printf("enter the first number\n");
    scanf("%f",&a);
    printf("enter the second number\n");
    scanf("%f",&b);
    sum=(a+b);
    subtraction=(a-b);
    multiplication=(a*b);
    division=(a/b);
    //modulus=(a%b);
    printf("the sum is %f \n",sum);
    printf("the sub is %f \n",subtraction);
    printf("the div is %f \n",division);
    printf("the mul is %f \n",multiplication);
   // printf("the mod is %d \n",modulus);
    getch();
    return 0;


}
