/*
Name:Sushant Aryal
Program:Wap to enter two numbers and find sum using function
Subject:Programming Fundamental
Date:2017/01/25
*/
#include<stdio.h>
#include<conio.h>
int minimum();
int main()
{
    int result;
    result=minimum();
    printf("the minimum no. is %d", result);
    return 0;
}

int minimum()
{
    int a,b;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    if (a<b)
        return a;
        else
            return b;




}
