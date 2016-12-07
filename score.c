/*Name:Sabina Prajapati
Subject:Programming Fundamental
Program:Write a program to use the logical operators,take avalue from the user and store it any variable
Lab No:
Roll No:
Date:
*/
#include<stdio.h>
#include<conio.h>
int main(){
int x;
printf("Enter the number\n");
scanf("%d",&x);
if(x>=80){
    printf("The score is distinction\n");
}
else if(x>=60&&x<80){
    printf("The score is first division\n");

}
else if(x>=50&&x<60){
    printf("The score is second division\n");
}
else if(x>=45&&x<50){
    printf("The score is third division\n");
}
else{
    printf("The result is fail");
}
getch();
return 0;
}
