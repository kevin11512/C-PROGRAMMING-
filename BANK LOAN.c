//variables and data types
/*
Name:kevin Mwiathi
Reg No.:CT100/G/30731/26
Description:Task 4 assignment

*/

#include<stdio.h>

int main(){
	
	//decrare variables
	int age;
	double income;
	
	printf("Enter your age: \t");
	scanf("%d",&age);
	
	printf("Enter your annual income in ksh: \t");
	scanf("%lf",&income);
	
	if(age>=21 && income>=21000) {
	printf("Congratulation you have qualify for a loan. \n ");
	
	}else{	
	
	if(age<21 && income<21000);
	printf("Unfortunately, we are unable to offer you a loan at this time. \n");
	}
	
return 0;
	
}

	
	
	