/*
 ============================================================================
 Name        : Assignment5 Q2
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void fAdd(double a, double b);
void fSub(double a, double b);
void fMul(double a, double b);
void fDiv(double a, double b);

//function pointer with all the functions
void (*func_ptr[4])(double, double)= {fAdd, fSub, fMul, fDiv };

int main(void) {
	int option;
	double a, b;
	//void (*func_ptr[4]) = {fAdd, fSub, fMul, fDiv};

	while(1){
		puts("");
		printf("\nEnter 0 to quit");
		printf("\nEnter 1 for Add");
		printf("\nEnter 2 for Subtraction");
		printf("\nEnter 3 for Multiplication");
		printf("\nEnter 4 for Division");
		puts("");
		scanf("%d", &option);

		//stop loop if user inputs 0
		if (option == 0){
			break;
		}
		printf("\nEnter first number: ");
		scanf("%lf", &a);
		printf("\nEnter second number: ");
		scanf("%lf", &b);

		if ((option >= 1) && (option <= 4)) {
			//picks right function to call
			(*func_ptr[option-1])(a, b);
		}
	}
	return 0;

}
//add function
void fAdd(double a, double b){
	printf("\n%f + %f = %lf", a, b, a + b);
}
//subtract function
void fSub(double a, double b){
	printf("\n%f - %f = %lf", a, b, a - b);
}
//multiplication function
void fMul(double a, double b){
	printf("\n%f * %f = %lf", a, b, a * b);
}
//division function
void fDiv(double a, double b){
	printf("\n%f / %f = %lf", a, b, a / b);
}
