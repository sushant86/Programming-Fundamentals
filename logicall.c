/*
name :sushant aryal
roll:41
program :To use logical operator
*/
#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n>=80)
{
    printf("distinction");
}

else if(n>=60&&n<80)

{
    printf("First");
}
else
    {
        printf("second");
    }
getch();
return(0);
}

