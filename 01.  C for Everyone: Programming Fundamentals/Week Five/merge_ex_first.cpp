/*
Merge Code
Coding With Kien
October, 2022
*/

#include<stdio.h>
void print_array(int how_many, int data[], char *str){
	int i; 
	printf("%s", str);
	for(i = 0; i < how_many; i++){
		printf("%d\t", data[i]);
	}
}

void merge(int a[], int b[], int c[], int how_many){
	int i = 0, j = 0, k = 0;
	while(i < how_many && j < how_many){
		if (a[i] < b[i]){
			c[k++] = a[i++];
		}
		else{
			c[k++] = b[j++];
		}
	}
	while (i < how_many){
		c[k++] = a[i++];
	}
	while (j < how_many){
		c[k++] = b[j++];
	}
}
int main(void){
	const int SIZE = 5;
	int a[SIZE] = {1, 3, 7, 9, 20};
	int b[SIZE] = {2, 5, 10, 15, 50};
	int c[2*SIZE];
	print_array(SIZE, a, "My grades \n");
	printf("\n\n");
	print_array(SIZE, b, "More grades \n");
	printf("\n\n");
	merge(a, b, c, SIZE);
	print_array(2*SIZE, c, "My store grades \n");
	printf("\n\n");
	return 0;
}
