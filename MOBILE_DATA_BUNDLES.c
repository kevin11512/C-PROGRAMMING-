/*
Name:Kevin Mwiathi
Reg No:CT100/G/30731/26
Description:week_3_task_3 Assignment

*/ 

#include<stdio.h>

int option;

int main(){
	
	printf("Select data bundles: \n");
	printf("1. 100MB @ 50 KES \n ") ;
	printf("2. 500MB @ 200 KES \n" );
	printf("3. 1GB @ 350 KES \n");
	printf("4. 2GB @ 600 KES \n");
	
	printf("Enter your choice(1-4): \t");
	scanf("%d", &option);
	
	if(option <= 1){
		printf("You selected 100MB. cost = 50.00 KES \n");
		
	}else if(option <= 2){
		printf("You selected 500MB. cost = 200.00 KES  \n" );
	
	}else if(option <= 3){
		printf("You selected 1GB. cost = 350.00 KES  \n");
	
	}else if(option <= 4){
		printf("You selected 2GB. cost = 600.00 KES  \n");
	
	}else if(option > 4){
		printf("Invalid choice \n");
	}
	
	return 0;
}
	
	
	