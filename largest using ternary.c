/*
student name:sushant aryal
subject:programming fundamental
roll no:41
date:2016/11/12
program:wap a c progrm to find the largest among three number
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("enter the third number\n");
scanf("%d",&c);
(a>b&&b>c)?printf("%d is the largest\n",a):(b>a&&a>c)?printf("%d is the largest\n",b):printf("%d is the largest\n",c);
getch();
return 0;
}

