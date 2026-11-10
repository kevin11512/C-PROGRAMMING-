
/*
NAME:Kevin Mwiathi
REG NO:CT100/G/30731/26
DESCRIPTION:Elecricity bill for a power company

*/

#include<stdio.h>

//function prototype
float calculateenergycharge(float number_of_unit_consumed);
float calculatetax(float energycharge);
float calculatetotal_bill(float energycharge , float tax);

int main(){
	float units,charge,tax,total_bill;
	
	
	printf("Enter the number of units consumed \t");
	scanf("%f",&units);
	
	//function call
	charge = calculateenergycharge(units);
	tax = calculatetax(charge);
	total_bill = calculatetotal_bill(charge , tax);
	
	printf("Unit consumed:%.2f \n",units);
	printf("Energy charge:KSH%.2f \n",charge);
	printf("Tax:KSH%.2f \n",tax);
	printf("Total bill:KSH%.2f  \n",total_bill);
	
	return 0;
	
}
	

//function defination 
float calculateenergycharge(float number_of_unit_consumed){
	float energycharge;
	
	if(number_of_unit_consumed<=50){
		energycharge = number_of_unit_consumed * 10;
	}
	else if(number_of_unit_consumed>50 && number_of_unit_consumed<=150){
		energycharge = number_of_unit_consumed * 15;
	}
	else if(number_of_unit_consumed>150){
		energycharge = number_of_unit_consumed * 20;
	}
	
	return energycharge;
}
	
//function defination		
float calculatetax(float energycharge){
    float tax;
	
	tax = energycharge * 0.1;
	
	return tax;
	
	}
	

//function defination	
float calculatetotal_bill(float energycharge , float tax){
	float total_bill;
	
	total_bill = energycharge - tax;
	
	return total_bill;
}
	
	