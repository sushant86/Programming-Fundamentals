/*Name:Sushant Aryal
Subject:Programming Fundamental
Program:Write a program to print the area of the trapezium
Roll No:
Lab No:
Date:
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,b,h,area;
printf("Enter the length of first parallel sides\n");
scanf("%d",&a);
printf("Enter the length of second parallel sides\n");
scanf("%d",&b);
printf("Enter the height\n");
scanf("%d",&h);
area=(h*(a+b))/2;
printf("The area of the trapezium is %d",area);
getch();
return 0;



}
