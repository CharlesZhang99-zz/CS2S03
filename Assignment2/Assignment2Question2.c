/*
 ============================================================================
 Name        : Assignment2Question2
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototype for function multiples
int multiples(int, int);

int main(void) {
	int a,b;

    //keeps looping until user stops program
	while (1){
	//ask user to enter number a
	printf("\nInput number a: ");
	//saves number a to variable a
	scanf("%d", &a);
	printf("Input number b: ");
	scanf("%d", &b);

	//tells user out to interpret result
	printf("(1 if 'b' is a multiple of 'a', 0 if not) \n");
	//calls multiplies function and displays result
	printf("Your result is %d \n", multiples(a,b));
	}
	return EXIT_SUCCESS;
}

//multiplies function takes in int a and int b
int multiples(int a,int b){

	//use mod to store remainder in remainder variable
	int remainder = a % b;

	//if the reminader is greater than 0 then it means b is not a multiple of a
	if (remainder > 0){
		return 0;
	}
	//else b IS a multiple of a
	else return 1;

}
