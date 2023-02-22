/*
Storage Code Classes
Coding With Kien
October, 2022
*/

#include <stdio.h>
extern int response = 0;
void f(void){
	static int called = 0;
	printf("\nf Called %d\n", called);
	called++;
	response += called;
}

int main(){
	auto int i = 1;
	const int LIMIT = 10;
	for(i = 1; i < LIMIT; i++){
		printf("\ni local = %d, response global = %d\n", i, response);
		f();
	}
	return 0;
}
