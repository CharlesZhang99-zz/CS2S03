/*
 ============================================================================
 Name        : Assignment7 Q3
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>

int main ()
{
	char newLine[256], file1Name[256], strings; // str is a char


	printf(" Input the file name to be opened : ");
	fgets(file1Name, sizeof(file1Name), stdin);
	file1Name[strlen(file1Name) - 1] = '\0';
	FILE * filePtr; //file pointer
	filePtr = fopen(file1Name , "a"); //open file as append
    printf("Enter number of lines to write: ");
    int n;
    scanf("%d", &n);
    printf("Enter yo lines: \n");

    for(int i = 0; i < n+1; i++)
    {
    	fgets(newLine, sizeof(newLine), stdin);
    	//put the string in the file
    	fprintf(filePtr, "%s", newLine);
    }

  fclose (filePtr); //close the file

}
