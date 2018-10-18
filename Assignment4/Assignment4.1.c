/*
 ============================================================================
 Name        : Assignment3 Q1
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n);

int main(void) {

	//prompts the user to enter the size of the array
	printf("Enter the number of elements in the array: ");
	int n;
	scanf("%d", &n);
	int a[n];

	//Enters the elements into the array one by one
	for (int i = 0; i <= n-1; i++){
		int element;
		printf("Enter the element: ");
		scanf("%d", &element);
		a[i] = element;
	}
	//sort the array (doesnt matter if its ascending or descending order. Both will work)
	insertionSort(a, n);

	puts("Unique Elements are: ");

	//tests if the first element (smallest value) if unique
	if (a[0] != a[1]){
		printf("%d \n", a[0]);
	}
	//tests all the elements except the first and last element to see if theyre unique
	for (int i = 1; i <= n-2; i++){
		//tests if the element infront and the element behind is not the same
		if (a[i] != a[i-1] && a[i] != a[i+1]){
			printf("%d \n", a[i]);
		}
	}
	//tests if the last element (greatest value) if unique
	if (a[n-1] != a[n-2]){
		printf("%d \n", a[n-1]);
	}

	return EXIT_SUCCESS;
}

/* Pre-made Insertion Sort*/
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
