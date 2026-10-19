//variables and data types
/*
Name:Kevin mwiathi
Reg no:CT100/G/30731/26
Description:week_3_task_1 assigment

*/
#include<stdio.h>

int main(){
	
	//decrare variables
	
	float attendance;
	float average_marks;

	printf("Attendance is: \t");
	scanf("%f",&attendance);
	
	printf("Average marks are: \t ");
	scanf("%f",&average_marks);
	
	if(attendance>=0.75 && average_marks>=40){
 	printf("Eligible \n");
 	
	}else{
		
     if(attendance<0.75  &&  average_marks<40);
	 printf("Not eligible \n");
	}
	
	return 0;
}
	
	
