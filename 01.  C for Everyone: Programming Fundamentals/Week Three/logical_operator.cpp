/*
Logical Operator and Short Circuit Evaluation
Coding With Kien
October, 2022
*/

#include <stdio.h>
int main(){
	int outside, weather;
	printf("Enter if outside 1 true 0 false: ");
	scanf("%d", &outside);
	printf("Enter if rain 1 true 0 false: ");
	scanf("%d", &weather);
	if(outside && weather){
		printf("\nPlease use an umbrella.");
	}
	else{
		printf("\nDress normaly.\n");
	}
	return 0;
	
}

