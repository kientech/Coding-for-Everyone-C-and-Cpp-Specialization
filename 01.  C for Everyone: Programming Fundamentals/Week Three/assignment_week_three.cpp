/*
Write a function that prints a table of values for sine and cosine between (0, 1)
Coding With Kien
October, 2022
*/

#include<stdio.h>
#include<math.h>
int main(void)	{ 
	//declaration 
	float interval, x, y;
	int i;

	//for loop
	for(i = 0; i <10; i++)
	{
 		interval = i/10.0;
		x = (sin(interval));
		y = (cos(interval));
 		printf("sine(%f)=%f\t cosine(%f)=%f\n", interval, x, interval, y);
	}	

	return 0;
}
