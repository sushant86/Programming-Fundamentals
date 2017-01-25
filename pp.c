/*
Name:Sushant Aryal
Program:Wap to enter two numbers and find sum using function
Subject:Programming Fundamental
Date:2017/01/25
*/
#include<stdio.h>
#include<conio.h>
void sum();
int main()
{

    sum();
    return 0;
}
    void sum()
    {
        int a,b,sum;
        printf("enter first number\n");
        scanf("%d",&a);
        printf("enter second number\n");
        scanf("%d",&b);
        sum=(a+b);
        printf("the sum of two number is %d",sum);
        getch();
        return 0;

    }
