/*
Array grade code
Coding With Kien
October, 2022
*/

#include <stdio.h>
int main(){
	const int SIZE = 5;
	int grades[SIZE] = {90, 35, 76, 89, 99};
	double sum;
	int i;
	
	printf("My grade are: \n");
	
	for (i = 0; i < SIZE; i++){
		printf("%d\t", grades[i]);
	}
	printf("\n\n");
	for (i = 0; i < SIZE; i++){
		sum += grades[i];
	}
	printf("My average is: %.2f", sum/SIZE);
}
