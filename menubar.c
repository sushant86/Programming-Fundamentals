/*
name:sushant aryal
program:
subject:programming fundamental
roll no:41
date:21/12/2016
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,x;
	char d;
	printf("===MENUBAR===");
	printf("1.EVEN\n");
	printf("2.VOWEL\n");
	printf("3.ALPHABET\n");
	printf("4.PRIME\n");
	printf("5.DIVISIBLE\n");
	printf("6.EXIT\n");
	printf("chose any no\n");
	scanf("%d",&a);
	switch(a){
	case 1:
			printf("enter the value");
		    scanf("%d",&x);
		if(x%2==0){
			printf("the no is even");	
			}
		else{      
			printf("the no is odd");
			}
		break;
	case 2:
		printf("enter the value");
		scanf("%c",&d);

		if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U')
	{
		printf("The given character is vowel letter");
	}
	else
	{
		printf("The given character is consonent");
	}
	break;
   case 3:
			printf("enter the value");
		scanf("%c",&x);

		printf("%d",x);
	if((x>=65&&x<=90)||(x>=97&&x<=122))
	{
		printf("The given character is alphabet letter");
	}
	else
	{
		printf("The given character is not alphabet letter");
	}
		break;		
	
	
	case 4:
		printf("enter the value");
		scanf("%c",&x);
		x=c;
		if(x%1==0&&x%x==0)
	{

		printf("The given number is prime number");
	}
	else
	{
		printf("The given number is not prime number");
	}
	break;

	case 5:	
	printf("enter the value");
		scanf("%c",&x);
		x=c;
	if(x%11==0&&x%5==0)
	{

		printf("The given number is divisible by 5 and 11");
	}
	else
	{
		printf("The given number is not divisible by 5 and 11");
	}
	break;
	case 6:
	exit(0);
	break;
}
	return 0;
}
