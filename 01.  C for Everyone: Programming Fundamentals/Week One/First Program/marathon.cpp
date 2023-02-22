/*
The distance of a marathon in kilometers
Coding With Kien
October, 2022
*/

#include <stdio.h>
int main(){
	float miles = 28.9;
	int yards = 285;
	double kilometers;
	
	kilometers = 1.609 * (miles + yards / 1760);
	printf("A marathon is %.2lf kilometer.\n\n", kilometers);
	return 0;
}
