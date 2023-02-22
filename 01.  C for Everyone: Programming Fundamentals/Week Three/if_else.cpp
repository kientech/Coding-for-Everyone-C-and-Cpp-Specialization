/*
If and relation and flow of control
Coding With Kien
October, 2022
*/

#include <stdio.h>
int main(){
	int speed;
	printf("Enter your speed as an integer: ");
	scanf("%d", &speed);
	if (speed < 65){
		printf("\nNo speeding Ticket.");
	}
	else{
		printf("\nSpeeding Ticket");
	}
	return 0;
}
