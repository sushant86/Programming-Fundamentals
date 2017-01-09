/*
Student Name=Sushant aryal
Subject=Programming Fundamentals 
Roll No.=
Program=
Lab No.=16
BCS Sem.=1st
Date=jan 09,2017
*/

#include<stdio.h>

int main()
{
	char a;
	printf("Enter any character:");
	scanf("%c",&a);
	
	((a>='A' && a<='Z') || (a>='a' && a<='z'))?printf("%c is an alphabet",a):printf("%c is not an alphabet",a);
   
}
