/*Name:Sushant Aryal
Subject:Programming Fundamental
Program:Write a program to print area and volume of the sphere
Roll no:13
Lab No:04
Date:21st Nov,2016*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main(){
    float r,area,volume;
    printf("enter the value of radius\n");
    scanf("%f",&r);
    area=4*PI*(r,2);
    volume=4/3*PI*(r,3);
    printf("the area of the sphere is %.2f\n",area);
    printf("the volume of the sphere is %.2f\n",volume);
    getch();
    return 0;






}
