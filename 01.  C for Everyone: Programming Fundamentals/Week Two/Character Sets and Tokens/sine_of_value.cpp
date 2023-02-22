/*
Write a program that can give the sine of a value between 0 and 1 (non inclusive). 
You will be graded based on whether the program can output a value in the correct range and whether your code is well-formatted and logically correct.
Coding With Kien
October, 2022
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159
int main()
{
  double sinValue, radianVal, degreeVal;
  printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  
  // Converting Degree Value to Radian 
  radianVal = degreeVal * (PI/180);
  sinValue = sin(radianVal);
  
  printf("\n The Sine value of %lf = %lf ", degreeVal, sinValue);
  
  return 0;
}
