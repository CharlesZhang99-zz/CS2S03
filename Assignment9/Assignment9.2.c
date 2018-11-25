/*
 ============================================================================
 Name        : Assignment9 Q2
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
int pop();
int check_punc(char ch);

node_t * top;

int main(void) {
	char str[256], mStr[256];
	initialize();
	int pornotp = 1;

	printf("Input your string: ");
	fgets(str, 256, stdin);

	//adds string char one by one to the stack
	for(int i = 0; i < strlen(str) - 1; i++){
		//if its a punc then it skips over it
		if(check_punc(str[i])){
			pushToTop(str[i]);
		}
	}

	//compares stack with our string
	for(int i = 0; i < strlen(str) - 1; i++){
		//skips over puncs
		if(check_punc(str[i])){
			char compare = pop();
			if(str[i] != compare){
				pornotp = 0;
			}
		}
	}


	//if pornotp is 1 then it is a palindrome
	if(pornotp){
		for(int i = 0; i < strlen(str) - 1; i++){
			printf("%c", str[i]);
		}
		printf(" is a palindrome");
	}

	//if pornotp is 0 then it is not a palindrome
	if(pornotp == 0){
		for(int i = 0; i < strlen(str) - 1; i++){
			printf("%c", str[i]);
		}
		printf(" is not a palindrome");
	}
}

//initialize top for it to address
void initialize()
{
    top = NULL;
}

//little function I wrote for the first question
//pushes a new node to top of the stack
void pushToTop(char data) {
	node_t * newNode = NULL;
	newNode = malloc(sizeof(node_t));
	newNode->data = data;
	newNode->link = top;
	top = newNode;
}

//takes out top node
//returns value of top node
int pop()
{
    node_t *tmp;
    int n;
    tmp = top;
    n = tmp->data;
    top = top->link;
    free(tmp);
    return n;
}

//this func returns 0 if its a punctuation. 1 if not
int check_punc(char ch)
{
    if (ch == '.' || ch == ',' || ch == '/' || ch == ';' || ch == ':' || ch == '\'' || ch == '\"')
      return 0;
    else
      return 1;
}
