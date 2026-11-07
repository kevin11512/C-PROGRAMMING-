/*
Name:Kevin mwiathi
Reg No:CT100/G/30731/26
Description:week_5_task_2 assignment

*/

#include<stdio.h>

//function prototype
double calculatefare(double distance_traveled);

int main (){ 
	
	double total_fare;
	float distance_traveled;
	
	printf("Distance(in kilometers): \t" );
	scanf("%f",&distance_traveled);
	
	//function call
	total_fare =  calculatefare(distance_traveled);
	
	
	return 0;
}


//function defination
double calculatefare(double distance_traveled){
	double total_fare;
	
total_fare = distance_traveled * 50;

printf("Total fare:KSH %.2lf \n",total_fare);
	
		
	return total_fare;
}
	