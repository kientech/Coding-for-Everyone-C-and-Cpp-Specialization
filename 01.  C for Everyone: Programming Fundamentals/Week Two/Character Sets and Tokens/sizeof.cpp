/* Fundamental Type Sizeof Operator
Coding With Kien
October, 2022
*/

#include <stdio.h>
int main(){
	int a = 2, b = 4, c = 6; // Declare and Initialize
	double average = 0.0;
	char ch = 'k';
	
	printf("\t\aOn System");
	printf("\n int is %lu bytes.", sizeof(int));
	printf("\n long int is %lu bytes.", sizeof(long int));
	printf("\n char is %lu bytes.", sizeof(ch));
	printf("\n float is %lu bytes.", sizeof(float));
	printf("\n double is %lu bytes.", sizeof(double));
	printf("\n long double is %lu bytes.", sizeof(long double));
}
