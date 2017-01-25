/*
Name:Sushant Aryal
Program:Wap to enter two numbers and find sum using function
Subject:Programming Fundamental
Date:2017/01/25
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int area(int a);
int main()
{
    int a;
    printf("Enter the radius of the circle\n");
    scanf("%d",&a);

    a=area(a);

    printf("the area of circle is %d",a);
    return(a);
}


 int area (int r)
 {
     int area1;
     area1=PI*r*r;
     return area1;

 }
