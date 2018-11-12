/*
 ============================================================================
 Name        : Assignment6 Q3
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>


int packCharacters(char a, char b);
void convert(unsigned int a);
int unpackCharacters(int a);

int main()
{
  char a, b;
  printf("Please enter characters:\n");
  scanf("%c %c", &a, &b);

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

    unpackCharacters(result);
}

int unpackCharacters(int value)
{
	puts("");
	puts("");
	printf("--------------------------------\n\nUnpacking the following: \n%d = ", value);
	convert(value);
	char a, b;
	unsigned int mask1 = 65280;
	unsigned int mask2 = 255;

	a = (value & mask1) >> 8;
	b = (value & mask2);
	puts("");
	printf("First character is: \n'%c' = %d = ", a, a);
	convert(a);
	puts("");
	printf("Second character is: \n'%c' = %d = ", b, b);
	convert(b);
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
