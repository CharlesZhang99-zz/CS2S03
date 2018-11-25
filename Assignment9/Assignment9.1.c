/*
 ============================================================================
 Name        : Assignment9 Q1
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char data;
    struct node * link;
} node_t;

void initialize();
void pushToTop(char data);
void print_list(node_t * top);

node_t * top;

int main(void) {
	initialize();
	printf("Input the list of 10 characters \n");

	//gets 10 characters from the user
	for (int i = 0; i < 10; i++){
		char temp;
		printf(": ");
		scanf(" %c", &temp );
		//push char to the stack
		pushToTop(temp);
	}
	//print all the node values
	print_list(top);
}

void initialize()
{
    top = NULL;
}

//adds value to a node and puts it at the top of the stack
void pushToTop(char data) {
	node_t * newNode = NULL;
	newNode = malloc(sizeof(node_t));
	newNode->data = data;
	newNode->link = top;
	top = newNode;
}

//print_list program i wrote from last assignment
//just prints all the values of nodes starting from the head
void print_list(node_t * top) {
	printf("The list in reverse is: \n");
    node_t * current = top;

    while (current != NULL) {
        printf(" %c", current->data);
        printf(" ");
        current = current->link;
    }
}
