/*
 ============================================================================
 Name        : Assignment4 Q2
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomize(int a[], int n);
int main(void) {
	int size;
	puts("Input the size of the array: ");
	scanf("%d", &size);
	int a[size];

	puts("Input values for the integer array you want to randomize: ");
	for (int i = 0; i < size; i++){
		int temp;
		scanf("%d", &temp);
		a[i] = temp;
	}
	randomize(a, size);
	for (int i = 0; i < size; i++){
		printf("%d \n", a[i]);
	}
	return EXIT_SUCCESS;
}

void randomize(int a[], int size){
	srand(time(NULL));
	for (int i = 0; i < size; i++){
		int swap1 = rand() % size;
		//int swap2 = rand() % size;

		int temp = a[swap1];
		a[swap1] = a[i];
		a[i] = temp;
	}
}
