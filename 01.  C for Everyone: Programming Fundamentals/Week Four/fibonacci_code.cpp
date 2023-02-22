/*
Fibonacci
Coding With Kien
October, 2022
*/

#include<stdio.h>
long fibonacci(int n){
	long f2 = 0, f1 = 1, f_old;
	int i;
	for(i = 1; i < n; i++){
		f_old = f2;
		f2 = f2 + f1;
		f1 = f_old;
	}
	return f2;
}

long recursion_fibonacci(int n){
	if (n <=1){
		return n;
	}
	else{
		return (recursion_fibonacci(n - 1) + recursion_fibonacci(n - 2));
	}
}

int main(void){
	int how_many = 0, i;
	printf("I want table of fibonacci up to n: ");
	scanf("%d", &how_many);
	printf("\nFibonacci\n");
	for(i = 1; i <= how_many; i++){
		printf("\n%d\t %ld %ld\n", i, fibonacci(i), recursion_fibonacci(i));
	}
}
