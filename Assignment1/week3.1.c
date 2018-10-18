/*
 ============================================================================
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//created a variable to store inputs
	float a;
    //while loop runs until break

	while (1){
	//prompts user to enter sales number
	printf("Enter sales in dollars (-1 to end): ");
	//stores sales number in variable
	scanf("%f", &a);

	//checks if sales number is valid. If it is -1 then the whole loop stops
	if (a == -1)
		break;

	//salary calculation
	float salary = 200 + (a * 0.09);

	//prints out final salary
	printf("Salary is: $%.2f \n", salary);
	}
	return EXIT_SUCCESS;
}
