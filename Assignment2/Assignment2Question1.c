/*
 ============================================================================
 Name        : Assignment2Question1
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototype for the double function
double hypotenuse(double a,double b);

int main(void) {
	double a, b;

	//ask user to enter number
	printf("Enter number for a: ");
	//save number to a
	scanf("%lf", &a);
	printf("Enter number for b: ");
	scanf("%lf", &b);

	//output the result after calling hypotenuse
	printf("The hypotenuse is : %lf", hypotenuse(a,b));
	return EXIT_SUCCESS;
}

//function to calculate hypotenuse
double hypotenuse(double a,double b){
	return sqrtf((pow(a,2) + pow(b,2)));
}
