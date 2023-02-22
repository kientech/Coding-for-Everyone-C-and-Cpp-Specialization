/*
Convert Fahrenheit to Celcius
Coding With Kien
October, 2022
*/

#include <stdio.h>
int main(){
	float fahrenheit, celcius;
	
	printf("Enter Fahrenheit: ");
	scanf("%f", &fahrenheit);
	celcius = (fahrenheit - 32) / 1.8; // note convertion
	printf("%.2f Fahrenheit is %.2f Celcius.", fahrenheit, celcius);
	return 0;
}
