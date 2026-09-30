//variable and data Types
/*
Name: Kevin mwiathi 
Reg no: CT100/G/30731/26
description: task 3 assignment 

*/

#include<stdio.h>
#define PI 3.142

int main (){
     //declare variable 
     float radius;
     float height ;
     float volume;
     float surfacearea ;
     
    printf("enter the value of radius: \t ");
    scanf("%f", &radius);
    
    printf("enter the value of height: \t ");
    scanf("%f",&height);
    
    volume = PI * radius * radius * height  ;
    
    surfacearea = 2 * PI * radius * radius  + 2 * PI * radius * height ;
                
    printf("\n");
    printf("volume of the cylinder = %.2f \n", volume);
    printf("surface area of the cylinder = %.2f \n ", surfacearea);
    
    return 0;
}  