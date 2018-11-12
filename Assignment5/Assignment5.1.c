/*
 ============================================================================
 Name        : Assignment5 Q1
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void fCir(double a);
void fArea(double a);
void fVol(double a);

//function pointer with all the functions
void (*func_ptr[3])(double)= {fCir, fArea, fVol};


int main(void) {
	int option;
	double a;

	while(1){
		printf("\nEnter 0 to quit");
		printf("\nEnter 1 for Circumference");
		printf("\nEnter 2 for Area");
		printf("\nEnter 3 for Volume");
		puts("");
		scanf("%d", &option);

		//stop loop if user inputs 0
		if (option == 0){
			break;
		}
		printf("\nEnter radius: ");
		scanf("%lf", &a);

		if ((option >= 1) && (option <= 3)) {
			//picks right function to call
			(*func_ptr[option-1])(a);
		}
	}
	return EXIT_SUCCESS;

}
//circumference function
void fCir(double a){
	printf("\nThe circumference is %lf ", 2 * M_PI * a);
}
//area function
void fArea(double a){
	printf("\nThe area is %lf ", M_PI * a * a);
}
//volume function
void fVol(double a){
	printf("\nThe Volume of the sphere is %lf", 4.0/3.0 * M_PI * a * a * a);
}
