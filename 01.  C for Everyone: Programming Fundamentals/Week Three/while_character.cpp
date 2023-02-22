/*
While CNT Character
Coding With Kien
October, 2022
*/

#include <stdio.h>
int main(){
	int blanks = 0, digits = 0, letters = 0, others = 0;
	int c = 'b';
	while (c = getchar() != EOF){
		if (c == ' '){
			++blanks;
		}
		else if (c >= '0' && c<= '9'){
			++digits;
		}
		else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
			++letters;
		}
		else{
			++others;
		}
	};
	printf("blanks = %d, digits = %d, leters = %d, others = %d", blanks, digits, letters, others);	
}
