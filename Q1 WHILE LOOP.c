
/*
NAME:KEVIN MWIATHI
REG NO:CT100/G/30731/26
DESCRIPTION:WEEK_4_WHILE_LOOP  QUESTION 1

*/

#include<stdio.h>

int main (){
	
	double balance;
	double withdraw;

	printf("Enter the initial balance KSH: \t");
	scanf("%lf",&balance);
	
	while(balance > 0)
	{
		printf("Enter the amount to withdraw KSH: \t");
	    scanf("%lf",&withdraw);
	    
	    balance = balance - withdraw;
	    
	    printf("Balance: %.2lf \n",balance);
	    	
	}
	
	return 0;
}