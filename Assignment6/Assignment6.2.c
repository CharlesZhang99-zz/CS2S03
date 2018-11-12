/*
 ============================================================================
 Name        : Assignment6 Q2
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

void convert(unsigned int num);
int packCharacters(char a, char b);

int main() {
	unsigned a,b;
	printf("Enter two characters: ");
	scanf(" %c %c",&a,&b);


	packCharacters(a, b);

}

int packCharacters(char a, char b)
{
    int firstNum, secondNum, result;
    firstNum = a;
    secondNum = b;
    result = firstNum;
    result = result << 8;
    result |= secondNum;
    printf("'%c' in bits is:\n%d = ", a, firstNum);
    convert(firstNum);
    puts("");
    printf("'%c' in bits is:\n%d = ", b, secondNum);
    convert(secondNum);
    puts("");
    printf("'%c' and '%c' packed is:\n%d = ", a, b, result);
    convert(result);
}

void convert(unsigned int num)
{
unsigned int bitmask=32768;
while(bitmask > 0)
   {
	if((num & bitmask) == 0 )
         printf("0");
	else
         printf("1");
	bitmask = bitmask >> 1 ;
   }
}
