/*
 ============================================================================
 Name        : Assignment6 Q1
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>
int power2(int, int);
int convert(int dec);
int main(void){

	int number, power, ans;
	//user input
	printf("Enter number: ");
	scanf("%d", &number);
	printf("\nEnter power: ");
	scanf("%d", &power);

	//call power2 function and set to ans variable
	ans = power2(number, power);
	printf("\nresult = %d",ans);
	printf("\nResult in binary = %d", convert(ans));

	return 0;
}

//power2 function
int power2(int number, int power){
	//use the shift operator to move the bit pointer by "power" places
	return number<<power;
}

//convert decimal to binary
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}
