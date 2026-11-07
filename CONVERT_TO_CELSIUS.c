/*
Name:Kevin Mwiathi
Reg No:CT100/G/30731/26
Description:week_5_task_3 assignment

*/

#include<stdio.h>

//function prototype
float convertToCelsius(float temparature_in_fahrenheit);

int main(){
	
	float fahrenheit,Temparature_in_celsius;
	
	printf("Temparature in Fahrenheit: \t ");
	scanf("%f",&fahrenheit);
	
	//function call
	Temparature_in_celsius = convertToCelsius(fahrenheit);
	
	
	return 0;
}


//function definition
float convertToCelsius(float temparature_in_fahrenheit){
	float celsius;
	
	
	celsius = (temparature_in_fahrenheit - 32) * 5/9 ;
	
		printf("Temparature in celsius is %.1f\370C \n",celsius);
	
	return celsius;
}