/*
Pointer Code
Coding With Kien
October, 2022
*/


#include <stdio.h>
int main(){
	const int SIZE = 5;
	int grades[SIZE] = {90, 98, 99, 89, 86};
	double sum = 0.0;
	double *ptr_to_sum = &sum;
	int i;
	
	printf("\nMy grade are: ");
	for (i = 0; i < SIZE; i++){
		printf("%d\t", grades[i]);
	}
	printf("\n");
	for(i = 0; i < SIZE; i++){
		sum += grades[i];
	}
	printf("\nMy average is: %.2f\n", sum/SIZE);
	printf("\n");
	
	printf("Sum is at %p, or %lu and is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);
}
