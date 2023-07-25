#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

//ASCII 10(Enter) will always be the last input recieved

int inputInt() {
	int x = 0;
	scanf("%d", &x);
	getchar();//trashes the enter key
	return x;
}

char inputChar() {
	char x;
	scanf("%c", &x);
	getchar();//trashes the enter key
	return x;
}

int trim(int x) {
	if (x == 0) { printf("\n------------Start.------------\n"); }
	if (x == 1) { printf("\n------------End---------------.\n\n"); }
	return 0;
}

int quit() {
	char x = 0;
	printf("\n>Quit? (Y/N)\n");
	x = inputChar();
	if (x == 89 || x == 121) { exit(0); }
	return 0;
}

int quitExc() {
	char x = 0;
	printf("\n>Quit? (Y/N)\n");
	x = inputChar();
	if (x == 89 || x == 121) { return -1; }
	return 0;
}

int restart() {
	char x = 0;
	printf("\n>Go again? (Y/N): ");
	x = inputChar();
	if (x == 'Y' || x == 'y') { return 0; }
	return -1;
}

void error404() {
	printf("\nOPS! :(\nItem not found. Please type again.\n");
}

/*
Make a Function to run exercises on a loop untill the user decides to end it[restart()]
void exerciseRepeater() {
	int x;
	for (x = 0; x != -1;) {
		exerciseX_Y;
		x = restart();
	}
}

A place holder for now: will mark with the a comment
			COPY>>
int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		//code here
		x = restart();
	}
			<<COPY
*/