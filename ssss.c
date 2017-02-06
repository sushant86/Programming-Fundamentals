#include<stdio.h>
struct multiplication{
	float num1;
	float num2;
	float num3;
	
};
int main(){
	float result;
	struct multiplication mul;
	printf("enter 1st number\n");
	scanf("%f",&mul.num1);
	printf("enter 2nd number\n");
	scanf("%f",&mul.num2);
	printf("enter 3rd number\n");
	scanf("%f",&mul.num3);
	result=mul.num1*mul.num2*mul.num3;
	printf("the multiplication of three number is %f",result);
	return 0;
}

