#include<stdio.h>
struct student{
	int id;
	int registration_number;
	float fee;
};
int main(){
	struct student sushant;
	sushant.id=100;
	sushant.registration_number=10050;
	sushant.fee=555.50;
	printf("sushant id= %d\n sushant registration.no= %d\n sushant fee= %f",sushant.id,sushant.registration_number,sushant.fee);
	return 0;
}
	
	       
	       
