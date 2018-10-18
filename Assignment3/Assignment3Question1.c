/*
 ============================================================================
 Name        : Assignment3 Q1
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(void) {
	int n;
	puts("Enter number: "); /* prints !!!Hello World!!! */
	scanf("%d", &n);

	//check if number is or 1, if it's 0, print 0, if its one, print 1.
	if (n == 0 || n == 1){
		printf("The %dth fibonacci number is %d", n, n);
	}
	else{
		//call fib and print the returned value
		printf("The %dth fibonacci number is %d", n, fib(n));
	}
	return EXIT_SUCCESS;
}
//this function calculates the fibonacci number
int fib(int n){
	int a = 0;
	int b = 1;
	int temp;
	//This for loop iterates until it is n - 3 of the nth number because the starting two numbers of fib is not counted and we start at 0
	for (int i = 0; i <= (n - 3); i++){
		//sets temp variable to sum of a and b
		temp = a + b;
		//set a to b (one number after original a)
		a = b;
		//set b to a (one number after original b)
		b = temp;
	}
	return b;
}
