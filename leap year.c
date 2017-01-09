/*
Student Name=Sushant aryal
Subject=Programming Fundamentals 
Roll No.=
Program=
Lab No.=
BCS Sem.=1st
Date=jan 09,2017
*/

#include<stdio.h>

int main()
{
	int a;
	printf("enter a year\n");
	scanf("%d",&a);
	((a%4==0 || a%400==0 || a%100!=0)) ?printf("leap year"):printf("not a leap year");
	

}
