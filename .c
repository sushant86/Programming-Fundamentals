/*Name:Sabina Prajapati
Subject:Programming Fundamental
Program:Write a program to use the logical operators,take avalue from the user and store it any variable
Lab No:
Roll No:
Date:
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z;
printf("Enter the first number\n");
scanf("%d",&x);
printf("Enter the second number\n");
scanf("%d",&y);
printf("Enter the third number\n");
scanf("%d",&z);
if(x>y&&y>z)
    {
    printf("%d is the largest no\n",x);
}
if(y>z&&z>x)
{
    printf("%d is the largest no\n",y);
}
    if(z>y&&y>x){
        printf("%d is the largest no\n",z);
    }
       getch();
       return 0;






}
