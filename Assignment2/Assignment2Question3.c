/*
 ============================================================================
 Name        : Assignment2Question3
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototype for function GDC
int GDC(int, int);

int main(void) {
	int a,b;

	//ask user to enter number a
	printf("Input number a: ");
	//saves number a to variable a
	scanf("%d", &a);
	printf("Input number b: ");
	scanf("%d", &b);

	//calls GDC function and displays result
	printf("The GDC is %d", GDC(a,b));

	return EXIT_SUCCESS;
}

//GDC function takes in int a and int b
int GDC(int a,int b){

	int counter = 1;
	int gdc;

	//if counter is bigger than a or b, loops ends (gdc cannot be bigger than the number itself)
	while (counter <= a && counter <=b){
		//the next two if statements uses mod to see if counter is a factor of both numbers
		if ((a % counter) == 0){
			if ((b % counter) == 0){
				//if counter is a factor of both numbers the gdc is set to it
				gdc = counter;
			}
		}
		//increment counter
		counter ++;
	}
	//return the value of gdc
	return gdc;
}
