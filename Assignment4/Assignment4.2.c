/*
 ============================================================================
 Name        : Assignment4 Q2
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(void) {
	puts("Enter how big the matrix is (how many rows/columns): ");
	int n;
	scanf("%d", &n);
	n++;
	int a[n][n];

	//enters random values from 1 to 99 into the array
	for (int i = 0; i < (n - 1); i++){
		for (int j = 0; j < (n - 1); j++){
			a[i][j] = rand() % 100;
		}
	}

	//iterates and outputs all the elements in the array
	puts("Your randomly generated matrix is: ");
	for (int i = 0; i < (n - 1); i++){
		for (int j = 0; j < (n - 1); j++){
			printf("%d ", a[i][j]);
		}
		puts("");
	}

	printf("\nThe sum is: \n");
	int sum;
	//adds up the upper triangle elements
	for (int i = 0; i < (n - 1); i++){
		for (int j = i + 1; j < (n - 1); j++){
			sum += a[i][j];
		}
	}
	printf("%d", sum);

	return EXIT_SUCCESS;
}



