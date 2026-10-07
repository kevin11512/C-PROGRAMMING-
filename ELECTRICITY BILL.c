/*
Name:Kevin Mwiathi
Reg No:CT/100/G/30731/26
Description:Local electricity company

*/ 

#include<stdio.h>

//function prototype
float calculatebill(float number_of_units_consumed);

int main(){
	float units,total;
	
	printf("Enter the number of units consumed: \t");
	scanf("%f",&units);
	
	//function call
	total = calculatebill(units);
	
	printf("\n");
	printf("=====KPLC=====\n");
	printf("Number of unit consumed: %.2f \n",units);
	printf("Total electricity bill:Ksh %.2f \n",total);
	printf("================\n");
	
	return 0;
	
}
	
//function defination
float calculatebill(float number_of_units_consumed){
	float bill;
	
	if(number_of_units_consumed<=100){
		bill = number_of_units_consumed * 10;
	}
	else if(number_of_units_consumed>100 &&  number_of_units_consumed <=200){
		bill = number_of_units_consumed * 15;
	}
	else if(number_of_units_consumed>200){
		bill = number_of_units_consumed * 20;
	}


return bill;

}