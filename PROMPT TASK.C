/*
//variables and data Types 

name: kevin mwiathi 
reg no: CT100/G/30731/26
description: task 2 assignment 
date: 18/09/2026

*/

#include <stdio.h>

int main () {
    //declare variables 
    float height; //%f
    double bankbalance; //%lf
    int phonenumber; //%d
    
    printf("Enter your height (in Meters or centimeters):  \t  ");
    scanf("%f", &height);
    
    printf("Enter your bank balance (in Kenyan shilling):  \t  ");
    scanf("%lf", &bankbalance);
    
    printf("Enter your phone number:  \t  ");
    scanf("%d", &phonenumber);
    
    printf("My height is % .1f Meters/centimeters \n" , height);
    printf("The bank balance is KSH % .2lf \n", bankbalance);
    printf("My phone number is % d \n", phonenumber);
    
    return 0;
    }