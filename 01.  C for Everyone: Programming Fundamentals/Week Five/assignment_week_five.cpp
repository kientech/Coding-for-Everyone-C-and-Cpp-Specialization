/*
Compute the average weight for a population of elephant seals read into an array
Coding With Kien
October, 2022
*/

#include<stdio.h>
int main()
{
	const int size = 5; // size of the array
	int arr[size], i;
	double sum = 0.0;
	printf("Enter weight of elephant seals: ");
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]); //inputs the weight of 1000 elephant seals in the array
	for(i = 0; i < size; i++)
		sum = sum + arr[i]; //finds the sum of the weights
	printf("Average weight: %lf", sum/size);
	return 0;
}
