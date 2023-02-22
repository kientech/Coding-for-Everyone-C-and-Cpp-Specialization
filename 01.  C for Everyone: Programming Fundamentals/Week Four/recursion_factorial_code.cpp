/*
Recursion factorial code
Coding With Kien
October, 2022
*/

#include <stdio.h>
// Long allows it to work for upto 20
long int factorial (int n){
	long f = 1;
	int i;
	for(i = 1; i <= n; i++){
		f = f * i;
	}
	return f;
}

long int recursion_factorial(int n){
	if(n == 1){
		return 1;
	}
	else{
		return (recursion_factorial(n - 1) * n);
	}
}

int main(void){
	int how_many = 0, i;
	printf("I want table of factorial upto n: ");
	scanf("%d", &how_many);
	printf("\n Factorial \n");
	for(i = 1; i <= how_many; i++){
		printf("\n%d\t %ld\n", i, factorial(i));
	}
	printf("\n\n");
	for(i = 1; i <= how_many; i++){
		printf("\n%d\t %ld\n", i, recursion_factorial(i));
	}
	printf("\n\n");
	return 0;
	
	
}
