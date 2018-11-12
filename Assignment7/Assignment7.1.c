/*
 ============================================================================
 Name        : Assignment7 Q1
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	char file1Name[256], file2Name[256], resultName[256];
	char singleLine[256];

	//first file part
    puts("Input the 1st file name :" );
    fgets(file1Name, sizeof(file1Name), stdin);
    file1Name[strlen(file1Name) - 1] = '\0';
    FILE * f1Pointer;
    //open first file as read
    f1Pointer = fopen(file1Name, "r");


    //second file part
    puts("Input the 2nd file name :" );
    fgets(file2Name, sizeof(file2Name), stdin);
    file2Name[strlen(file2Name) - 1] = '\0';
    FILE * f2Pointer;
    //open second file as read
    f2Pointer = fopen(file2Name, "r");


    //new file part
    puts("Input the new file name where to merge the above two files : ");
    fgets(resultName, sizeof(resultName), stdin);
    resultName[strlen(resultName) - 1] = '\0';
    FILE * rPointer;
    //open result file as write
    rPointer = fopen(resultName, "w");


    while(!feof(f1Pointer)){
        fgets(singleLine, sizeof(singleLine), f1Pointer);
        fprintf(rPointer, "%s", singleLine);
    }
    fprintf(rPointer, "\n");
    while(!feof(f2Pointer)){
            fgets(singleLine, sizeof(singleLine), f2Pointer);
            fprintf(rPointer, "%s", singleLine);
    }

    fclose(f1Pointer);
    fclose(f2Pointer);
}
