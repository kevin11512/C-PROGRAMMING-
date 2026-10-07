/*
Name:Kevin Mwiathi
Reg No:CT100/G/30731/26
Description: A company employee's salary

*/

#include<stdio.h>

//function prototype
double calculatetax(double gross_salary);

int main(){
	
	double salary,tax,net_salary;
	printf("Enter the employee's gross salary: \t");
	scanf("%lf",&salary);
	
	//function call
	tax = calculatetax(salary);
	net_salary = salary - tax;
	
	printf("\n");
	printf("============== \n ");
	printf("THE COMPANY EMPLOYEE'S SALARY \n");
	printf("============== \n");
	printf("Gross salary:Ksh %.2lf \n",salary);
	printf("Tax amount:Ksh %.2lf  \n",tax);
	printf("Net salary:Ksh %.2lf  \n",net_salary);
	
	return 0;
}
	
//function defination
double calculatetax(double gross_salary){
	double tax;
	
	if (gross_salary<30000){
		tax = 0.05 * gross_salary;
	}
	else if(gross_salary>=30000 && gross_salary<=59999){
		tax = 0.1 * gross_salary;
	}
	else if(gross_salary>=60000){
		tax = 0.15 * gross_salary;
	}
	return tax;
	
}