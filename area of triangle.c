/*Name:Sushant Aryal
Subject:Programming Fundamental
Program:Write a program to print area of the triangle
Roll no:
Lab No:3
Date:16thNov,2016*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("enter the length of first side\n");
    scanf("%f",&a);
    printf("enter the length of second side\n");
    scanf("%f",&b);
    printf("enter the length of third side\n");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
printf("the area of the tringle is %.2f",area);
    getch();
    return 0;






}
