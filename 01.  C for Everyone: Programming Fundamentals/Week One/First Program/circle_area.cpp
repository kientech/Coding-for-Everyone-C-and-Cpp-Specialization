/*
Area Circle
Coding With Kien
October, 2022
*/
#include <stdio.h>
#define PI 3.14159
int main(){
	double area = 0.0, radius = 0.0;
	printf("Enter radius: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("Area of cirle have radius %.2lf meters is: %.2lf ", radius, area);
	return 0;
}
