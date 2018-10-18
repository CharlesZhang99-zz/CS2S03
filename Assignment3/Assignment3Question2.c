/*
 ============================================================================
 Name        : Assignment3 Q2
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void instructions(int n, int startpeg, int endpeg, int temppeg);

int main(void) {
	//ask user and set values for n,a,b,c
	int n,a,b,c;
	puts("Enter number of disks:");
	scanf("%d", &n);
	puts("Enter starting peg number (recommend 1):");
	scanf("%d", &a);
	puts("Enter ending peg number (recommend 3):");
	scanf("%d", &c);
	puts("Enter temporary peg number (recommend 2):");
	scanf("%d", &b);
	instructions(n,a,c,b);
	return EXIT_SUCCESS;
}

void instructions(int n, int startpeg, int endpeg, int temppeg){

	//base case. If there is only 1 disk left then u can move it
	if (n == 1){
		printf("%d -> %d", startpeg, endpeg);
		puts("");
		return;
	}

	//move n – 1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area
	instructions((n - 1),startpeg,temppeg,endpeg);
	printf("%d -> %d", startpeg, endpeg);
	puts("");
	//Move the n – 1 disks from peg 2 to peg 3, using peg 1 as a temporary holding area
	instructions((n - 1),temppeg,endpeg,startpeg);
}
