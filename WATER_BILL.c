/*
Name:Kevin mwiathi
Reg no:CT100/G/30731/26
Description:week_3_task_2 assignment

*/

#include<stdio.h>

int main(){
	
	float units;
	double bill;
	
	printf("Enter the number of water units consumed: \t");
	scanf("%f", &units);
	
	if(units<=30){
		bill = units * 20;
	}
	else if(units>30  &&  units<=60){
		bill = units * 25;
	}
	else if(units>60){
		bill = units * 30;
	}
	
	printf("Total water bill:Ksh %.2lf \n",bill);
	
	return 0;
}
	
	