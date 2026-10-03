/*
Name:Kevin Mwiathi
Reg no.CT100/G/30731/26

*/

#include<stdio.h> 

int main (){
	
	float princpleamount;
	float time;
	float ratevalues;
	float simpleinterest;
	
	scanf("%f", &princpleamount);
	
	scanf("%f", &time);
	
	scanf("%f", &ratevalues);
	
	simpleinterest = ( princpleamount * time * ratevalues)/100;
	
	printf("\n");
	printf("The simple interest is %.2f \n ",simpleinterest);
	
	return 0;
}
	
	