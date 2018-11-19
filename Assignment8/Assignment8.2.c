/*
 ============================================================================
 Name        : Assignment8 Q2
 Author      : Charles Zhang 400131890
 ============================================================================
 */





//DOESNT REALLY WORK CAN I STILL GET PART MARKS?
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define INT_MIN 0


int isOperator(char symbol);

// A stack stucture
struct nodeStack
{
    char data;
    struct nodeStack* next;
};

struct nodeStack* newNode(int data)
{
    struct nodeStack* nodeStack = (struct nodeStack*) malloc(sizeof(struct nodeStack));
    nodeStack->data = data;
    nodeStack->next = NULL;
    return nodeStack;
}

int isEmpty(struct nodeStack *head)
{
    return !head;
}

void push(struct nodeStack** head, int data)
{
    struct nodeStack* nodeStack = newNode(data);
    nodeStack->next = *head;
    *head = nodeStack;
    //printf("%d pushed to stack\n", data);
}

int pop(struct nodeStack** head)
{
    if (isEmpty(*head)) return 0;
    struct nodeStack* temp = *head;
    *head = (*head)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int top(struct nodeStack* head)
{
    if (isEmpty(head)) return 0;
    return head->data;
}

int main()
{
	char input[100];
	char operators[] = "+-*/";
    struct nodeStack* head = NULL;
    printf("Input: Prefix: ");
    fgets(input, sizeof(input), stdin);

    int i = 0;
    input[strlen(input) - 1] = '\0';
    while (input[i] != '\0'){
    	push(&head, input[i]);
    	i++;
    }

    puts("b");
    i = 0;
    while (input[i] != '\0'){
    	puts("a");
    	if(isOperator(input[i])){
    		char a = top(head);
    		pop(&head);
    		char b = top(head);
    		pop(&head);
    		char temp[2];
    		temp[0] = a;
    		temp[1] = b;
    		temp[2] = input[i];
    		push(&head, temp);
    	}
    	else push(&head,input[i]);
    	i++;

    }

    puts("c");
    i = 0;
    while (input[i] != '\0'){
    	printf("%c", top(head));
    	pop(&head);
    }


    return 0;
}

//checks if its any of the operators
int isOperator(char symbol)
{
	switch (symbol) {
	  case '+':
	  case '-':
	  case '/':
	  case '*':
	    return 1;
	  }
	return 0;
}
