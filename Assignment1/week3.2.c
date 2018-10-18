//Name: Charles Zhang 400131890

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//create counter, number, and largest variables
	int counter = 0, number, largest = 0;
    //while loop runs until counter reaches 10 times
    while (counter < 10){
    	//prompts user to enter number of units sold
    	printf("Enter number of units sold by sales person: ");
    	//stores input in number
    	scanf("%d", &number);
    	//checks to see if number if not negative
    	if (number > 0){
    		//if number if bigger than the largest number then largest number becomes number
    		if (number > largest)
    		    		largest = number;
    		//add one to counter
    		counter ++;
    	}
    	//if invalid input then prompts the user to try again. Program does not break
    	else{
    		printf("Negative numbers are invalid. Try again. \n");
    	}
    }
    //prints largest number
    printf("The largest of numbers is: %d", largest);

}

