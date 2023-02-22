/* Fundamental Types INT
Coding With Kien
October, 2022
*/

#include <stdio.h>
int main(){
	short short_a = 5;
	int normal_a = 22;
	unsigned unsigned_a = 22u;
	long long_a = 20l;
	printf("short_a = %hd, devide by int 2 is %d\n", short_a, short_a/2);
	printf("short_a = %hd, devide by float 2 is %lf\n", short_a, short_a/2.0);
	printf("22 as a char is %c\n", normal_a);
	printf("size in bytes of short, int, unsigned, and long on my machine: ");
	printf("%lu, %lu, %lu, %lu\n", sizeof(short_a), sizeof(normal_a), sizeof(unsigned_a), sizeof(long_a));
	return 0;	
}
