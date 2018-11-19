/*
 ============================================================================
 Name        : Assignment8 Q1
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head);
void pushAddItemToEnd(node_t * head, int val);
void search(node_t * current, int val);
int main ()
{
	int firstElement = 0;
    node_t * head = NULL;
    head = malloc(sizeof(node_t));
	while(1){
		printf("\n\n\nEnter your choice \n");
		printf("1 to insertItem an element into the list \n");
		printf("2 to recursively search list for an element \n");
		printf("3 to end \n");
		printf("? ");
		int choice;
		scanf("%d", &choice);

		//if the user wants to add element
		if (choice == 1){
			int element;
			printf("Enter an integer: ");
			scanf("%d", &element);
			//if its the first element then add it manually
			if (firstElement == 0){
				head->val = element;
				head->next = NULL;
				firstElement = 1;
			}
			//if its not then we can run the function to add it automatically
			else
			{
				pushAddItemToEnd(head, element);
			}
			print_list(head);
		}

		//if user wants to search
		if (choice == 2){
			int element;
			printf("Enter an integer to recursively search for: ");
			scanf("%d", &element);
			search(head,element);
			print_list(head);
		}

		if (choice == 3){
			printf("\n\n\nENDING PROGRAM........");
			break;
		}
	}
}

//prints out the linked list in a visual manner
void print_list(node_t * head) {
	printf("The list is: \n");
    node_t * current = head;

    while (current != NULL) {
        printf(" %d", current->val);
        printf(" -->");
        current = current->next;
    }
    printf(" NULL\n");
}

//adds node to end of linked list
void pushAddItemToEnd(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

//recursively search the linked list
void search(node_t * current, int val) {
    if (current->val == val){
    	printf("%d is in the list\n", val);
    }
    else if (current->next != NULL){
    	search(current->next, val);
    }
    else {
    	printf("%d is not in list\n", val);
    }
}

