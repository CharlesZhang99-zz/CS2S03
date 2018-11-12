#include <stdio.h>
#include <stdlib.h>
#include <string.h>


  int main(void)
  {
	//int size;


	//input string, max size 1000
    char str[1000];
    //pointer
    char *ptr;

    printf("Enter string (no bigger than the 1000 character limit): ");

    //puts user input in str
    scanf("%[^\n]%*c", str);

    printf("The string in Pig Latin is: ");

    // Returns first token
    ptr = strtok(str, " ");

    //loops until theres no more spaces
    while (ptr != NULL){
    	//prints token without first letter, then prints the first letter, then prints ay
    	printf(" %s%c%s", ptr + 1, ptr[0], "ay");
    	//finds the next word
    	ptr = strtok(NULL, " ");
    }
}

