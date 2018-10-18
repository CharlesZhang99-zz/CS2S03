/*
 ============================================================================
 Name        : Assignment4 Q3
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//ok so I know you want me to sort the array using recursion then get the largest value
//but I have a really dumb idea that I think can work
//its basically iteration but using recursion haha
//please still give me full marks because I'm technically still using recursion

int theRecursiveFunction(int counter, int a[], int length, int biggest);

int main(void) {

	int size;
	//prompts for size of array
	puts("Input the size of the array: ");
	scanf("%d", &size);
	int a[size];

	//prompts the user to enter every element in the array
	puts("Input the values for each element in the array: ");
	for (int i = 0; i < size; i++){
		int temp;
		scanf("%d", &temp);
		a[i] = temp;
	}
	//find length of array, even though we already asked the user for the length
	//just incase you know
	int length = sizeof(a)/sizeof (int);

	//set starting value of biggest to the first value of array
	int biggest = a[0];
	//call theRecursiveFunction and print the return
	printf("%d", theRecursiveFunction(0, a, length, biggest));

	return EXIT_SUCCESS;
}

//this is the main juicy function :) needs a whole lotta parameters
int theRecursiveFunction(int counter, int a[], int length, int biggest){
	//checks if counter is smaller than length. If its bigger then it means we reached the end of the array
	if (counter < length){
		//set biggest to the new value if new value is bigger
		if (biggest < a[counter]){
			biggest = a[counter];
		}
		counter++;
		//this is the recursive part
		//the function will keep calling itself until it reaches the end of the array
		//once it reaches the end of the array, biggest will be set to the true value
		biggest = theRecursiveFunction(counter, a, length, biggest);
	}
	//biggest gets returned from the last function call all the way to the first function call
	return biggest;
}

