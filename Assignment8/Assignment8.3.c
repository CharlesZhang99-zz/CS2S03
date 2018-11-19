/*
 ============================================================================
 Name        : Assignment8 Q3
 Author      : Charles Zhang 400131890
 ============================================================================
 */



/* THIS IS THE MODIFIED VERSION OF MY CODE FROM QUESTION 1 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head);
void pushAddItemToEnd(node_t * head, int val);
void pop(node_t * head);
int main ()
{
	int firstElement = 0;
    node_t * head = NULL;
    head = malloc(sizeof(node_t));

	while(1){
		//user prompt menu
		printf("\n\n\nEnter your choice \n");
		printf("1 to insertItem an element into the list \n");
		printf("2 Deleted middle item \n");
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

		//if user wants to pop
		if (choice == 2){
			pop(head);
			print_list(head);
		}

		//end program
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

    printf("[ ");
    while (current != NULL) {
        printf(" %d,", current->val);

        current = current->next;
    }
    printf(" ]\n");
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

//pops node from middle of linked list
void pop(node_t * head) {
	node_t * current = head;
	int i = 1;
	while (current->next != NULL) {
		current = current->next;
		i++;
	}
	int middle = i/2;
	node_t * mid = head;
	while (middle > 1){
		mid = mid->next;
		middle--;
	}
	//skips a node basically
	mid->next = mid->next->next;

}

