#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
//For some reason getchar() is able to "trash" the enter key input.
//If getchar() is no present on inputInt() and inputChar() the last input will always be an int 10.
//int 10 or New Line char. Funny that is does not get inputed in the current function but the following.
//So! Without getchar(), the current function runs and there is an int 10 as a ghost waiting to get picked up
//on the next input function.
/*
The Enter Key issue:
	In order to run commands/functions the enter key is required. If we prompt the user to type something
e.g "Type your name", the user will type his name, let's say Bill, and press enter. The program will read all 4 letters
AND also the enter key which was used to execute the program. So you have 5 chars on a 4 char name. Therefore, the enter
key must be "trashed" in order to get programs to run as expected.
*/

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