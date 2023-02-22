/*
Function generator
Coding With Kien
October, 2022
*/

#include <stdio.h>
void word_repeat(int count){
	while (count > 0){
		printf("\n very");
		count--;
	};
	printf(" much.\n\n");
}
int main(){
	int repeat;
	printf("How strong is your love 1-10? :");
	scanf("%d", &repeat);
	printf("\nI love you");
	word_repeat(repeat);
}
