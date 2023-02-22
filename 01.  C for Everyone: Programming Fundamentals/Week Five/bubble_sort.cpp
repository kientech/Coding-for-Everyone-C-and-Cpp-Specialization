/*
Array Bubble Sort
Coding With Kien
October, 2022
*/


#include <stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print_array(int how_many, int data[], char *str){
	int i;
	printf("%s", str);
	for(i = 0; i < how_many; i++){
		printf("%d\t", data[i]);
	}
}

void bubble_sort(int data[], int how_many){
	int i, j;
	int go_on;
	for(i = 0; i < how_many; i++){
		print_array(how_many, data, "\nInside Bubble\n");
		printf("i = %d, Input any int continue: ", i);
		scanf("%d", &go_on);
		for(j = how_many - 1; j > i; j--){
			if (data[j - 1] > data[j]){
				swap(&data[j - 1], &data[j]);
			}
		}
	}
}

int main(){
	const int SIZE = 5;
	int grades[SIZE] = {90, 98, 99, 89, 96};
	print_array(SIZE, grades, "\nMy grades \n");
	printf("\n\n");
	bubble_sort(grades, SIZE);
	print_array(SIZE, grades, "My sorted grades \n");
	printf("\n\n");
	return 0;
}
