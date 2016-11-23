/*Name:Susant Aryal
Subject:Programming Fundamental
Program:Write a program to print roots of quadratic equation
Lab No:4
Date:21st Nov,2016*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float a,b,c,disc,A,r1,r2;
    printf("Enter the value of coefficient a\n");
    scanf("%f",&a);
    printf("Enter the value of coefficient b\n");
    scanf("%f",&b);
    printf("Enter the value of coefficient c\n");
    scanf("%f",&c);
    disc=pow(b,2)-(4*a*c);
     A=pow(disc,0.5);
    r1=(-b+A)/(2*a);
    r2=(-b-A)/(2*a);
    printf("The first root of the quadratic equations is %.2f",r1);
      printf("The second root of the quadratic equations is %.2f",r2);
    getch();
    return 0;






}
