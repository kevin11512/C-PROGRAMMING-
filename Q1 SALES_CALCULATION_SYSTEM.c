/*
Name:Kevin mwiathi
Reg NO:CT100/G/30731/26
Description: Sale_calculation_system Question

*/

#include<stdio.h>

//function protoype
float calculatesubtotal(float p1,float p2,float p3,float p4,float p5);
float calculatediscount(float subtotal);
float calculateamount(float subtotal , float discount);

//function defination
float calculatesubtotal(float p1,float p2,float p3,float p4,float p5){
	float total;
	total = p1 + p2 + p3 + p4 + p5;
	
	return total;
}

//function defination
float calculatediscount(float subtotal){
	float discount;
	
	if(subtotal>=10000){
		discount = subtotal * 0.1;
		
	}
	else if(subtotal>=5000 && subtotal<10000){
		discount = subtotal * 0.05;
		
	}
	else if(subtotal<5000){
		discount = subtotal * 0;
		
	}
		
	return discount;	
	}
	
	//function defination
	float calculateamount(float subtotal , float discount){
		float final_amount;
		
		final_amount = subtotal - discount;
		
		
		return final_amount;
	}



int main(){
	float p1,p2,p3,p4,p5;
	float subtotal,discount,final_amnt;
	
	
	printf("Price of prouduct 1: \t");
	scanf("%f",&p1);
	
	printf("Price of prouduct 2: \t");
	scanf("%f",&p2);
	
	printf("Price of prouduct 3: \t");
	scanf("%f",&p3);
	
	printf("Price of prouduct 4: \t");
	scanf("%f",&p4);
	
	printf("Price of prouduct 5: \t");
	scanf("%f",&p5);
	
	//function call
	subtotal = calculatesubtotal(p1,p2,p3,p4,p5);
	discount = calculatediscount(subtotal);
	final_amnt = calculateamount(subtotal,discount);
	
	printf("\n");
	printf("============= \n");
	printf("===MAGUNAS SUPERMARKET=== \n");
	printf("Subtotal:%.2f \n",subtotal);
	printf("Discount offered: %.2f \n",discount);
	printf("Final amount payable:%.2f \n",final_amnt);
	printf("\n");
	printf("THANKS FOR SHOPPING WITH US!!! \n");
	
	return 0;
}