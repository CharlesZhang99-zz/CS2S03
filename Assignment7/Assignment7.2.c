/*
 ============================================================================
 Name        : Assignment7 Q2
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>

void listEverything(char *path);


int main()
{
    //Directory path
    char path[256];
    printf("Enter path: ");
    scanf("%s", path);
    listEverything(path);
    return 0;
}

// Lists all the directories (sub directories) and files recursively
void listEverything(char *base)
{
    char path[1000];
    struct dirent *dirPath;
    DIR *dirPtr = opendir(base);

    // return if cant open directory stream
    if (!dirPtr)
        return;

    while ((dirPath = readdir(dirPtr)) != NULL)
    {

        if (strcmp(dirPath->d_name, ".") != 0){

        	if (strcmp(dirPath->d_name, "..") != 0)
			{
				printf("%s", dirPath->d_name);
				puts("");
				// make a new path from previous path
				strcpy(path, base);
				strcat(path, "/");
				strcat(path, dirPath->d_name);
				listEverything(path);
			}
        }
    }

    closedir(dirPtr);
}
