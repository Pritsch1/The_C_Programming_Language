#include <stdio.h>
#include "BookExercises.h"
#include "mylib.h"
#include "chapter1.h"
#include "project1.h"

void main() {
	welcome();
	start();
}

void welcome() {
	printf("Hello there! :)\n");
	printf("This is a show case of the exercises compleated from the book, ");
	printf("\"The C Programming Language\" by ");
	printf("Brian W. Kernighan and Dennis M. Ritchie.\n");
	printf("Along with the book exercises there will also be some ");
	printf("side projects and simple programs to test out language functionalities.\n");
	printf("Navigate trough the index bellow.\n\n\n");
}

//Main index------------------------------------------------//
void index() {
	printf("Index:\n");
	printf(" 0 - Quit Program\n");
	printf(" 1 - Chapter Selection\n");
	printf(" 2 - Side Projects\n");
}

void start() {
	for (int x = 0; x != -1;) {
		index();
		x = inputInt();
		switch (x)
		{
		case 0:
			quit();
			break;
		case 1:
			chapterSelection();
			break;
		case 2:
			projectsSelection();
			break;
		default:
			error404();
			break;
		}
	}
}//Main index------------------------------------------------\\

//Chapter Selection-----------------------------------------------------//
void chapterSelectionText() {
	printf("Choose a Chapter:\n");
	printf(" 0 - Go Back\n");
	printf(" 1 - Chapter 1. A Tutorial Introduction\n");
	printf(" 2 - Chapter 2. Types, Operators, and Expressions\n");
	printf(" 3 - Chapter 3. Control Flow\n");
	printf(" 4 - Chapter 4. Functions and Program Structure\n");
	printf(" 5 - Chapter 5. Pointers and Arrays\n");
	printf(" 6 - Chapter 6. Structures\n");
	printf(" 7 - Chapter 7. Input and Output\n");
	printf(" 8 - Chapter 8. The UNIX System Interface\n");
	printf(" 9 - Appendix A. Reference Manual\n");
	printf("10 - Appendix B. Standard Library\n");
	printf("11 - Appendix C. Summary of Changes\n");
	printf("12 - Quit Program\n\n");
}

void chapterSelection() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapterSelectionText();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			chapter1();
			break;
		case 2:
			//chapter2();
			break;
		case 3:
			//chapter3();
			break;
		case 4:
			//chapter4();
			break;
		case 5:
			//chapter5();
			break;
		case 6:
			//chapter6();
			break;
		case 7:
			//chapter7();
			break;
		case 8:
			//chapter8();
			break;
		case 9:
			//chapterApdxA();
			break;
		case 10:
			//chapterApdxB();
			break;
		case 11:
			//chapterApdxC();
			break;
		case 12:
			quit();
			break;
		default:
			error404();
			break;
		}
	}	
}//Chapter Selection-----------------------------------------------------\\

//Projects Selection----------------------------------------------------//
void projectsSelectionText() {
	printf(" 0 - Go Back\n");
	printf(" 1 - Temperature Converter\n");
	printf(" 2 - Quit Program\n");
}

void projectsSelection() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		projectsSelectionText();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			tempConverter();
			break;
		case 2://QUIIIIIT
			quit();
			break;
		default:
			error404();
			break;
		}
	}	
}//Projects Selection----------------------------------------------------\\