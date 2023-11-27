#include <stdio.h>
#include "chapter_1_examples.h"
#include "mylib.h"
#include "BookExamples.h"

//Chapter 1 Selection-----------------------------------------------//
void chapter1Text() {
	printf("\tChoose The Sub Chapter:\n");
	printf("\t 0 - Go Back\n");
	printf("\t 1 - 1.1  Getting Started\n");
	printf("\t 2 - 1.2  Variables and Arithimetic Expresions\n");
	printf("\t 3 - 1.3  The For Statemente\n");
	printf("\t 4 - 1.4  (Same as 1.3)Symbolic Constants\n");
	printf("\t 5 - 1.5  Character Input and Output\n");
	printf("\t 6 - 1.6  Arrays\n");
	printf("\t 7 - 1.7  Functions\n");
	printf("\t 8 - 1.8  Arguments - Call by Value\n");
	printf("\t 9 - 1.9  Character Arrays\n");
	printf("\t10 - 1.10 External Variables and Scope\n");
	printf("\t11 - Quit Program\n\n");
}

void chapter1() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapter1Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			chapter1_1();
			break;
		case 2:
			chapter1_2();
			break;
		case 3:
			//chapter1_3();
			break;
		case 4:
			//chapter1_3();
			break;
		case 5:
			//chapter1_5();
			break;
		case 6:
			chapter1_6();
			break;
		case 7:
			//chapter1_7();
			break;
		case 8:
			//chapter1_8();
			break;
		case 9:
			chapter1_9();
			break;
		case 10:
			//chapter1_10();
			break;
		case 11:
			quit();
			break;
		default:
			error404();
			break;
		}
	}
}//Chapter 1 Selection-----------------------------------------------//

//Chapter 1.1 Exercises-----------------------------------------------//
void chapter1_1Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Example 1\n\n");
	printf("  2 - Example 2\n\n");
	printf("  3 - Quit Program\n\n");
}

void chapter1_1() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapter1_1Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			printf("Example 1:\n\n");
			example1C1_1();
			trim(1);
			break;
		case 2:
			trim(0);
			printf("Example 2:\n\n");
			example2C1_1();
			trim(1);
			break;
		case 3:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}

void example1C1_1() {
	printf("hello, world\n");
}

void example2C1_1() {
	printf("hello, ");
	printf("world");
	printf("\n");
}//Chapter 1.1 Exercises-----------------------------------------------//

//Chapter 1.2 Exercises-----------------------------------------------//
void chapter1_2Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Example 1\n\n");
	printf("  2 - Example 2\n\n");
	printf("  3 - Quit Program\n\n");
}

void chapter1_2() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapter1_2Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			printf("Example 1\n\n");
			example1C1_2();
			trim(1);
			break;
		case 2:
			trim(0);
			printf("Example 2\n\n");
			example2C1_2();
			trim(1);
			break;
		case 3:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}

/* print Fahrenheit-Celcius table
    for farh = 0, 20, ..., 300 */
void example1C1_2() {
	int fahr, celcius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;

	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr = fahr + step;
	}
	printf("press enter to continue...");
	getchar();
}

/* print Fahrenheit-Celcius table
	for farh = 0, 20, ..., 300; floating-point version */
void example2C1_2() {
	float fahr, celcius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;

	while (fahr <= upper) {
		celcius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
	printf("press enter to continue...");
	getchar();
}//Chapter 1.2 Exercises-----------------------------------------------//

//Chapter 1.6 Exercises-----------------------------------------------//
void chapter1_6Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Example 1\n\n");
	printf("  2 - Quit Program\n\n");
}

void chapter1_6() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapter1_6Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			printf("Example 1\n\n");
			example1C1_6();
			trim(1);
			break;
		case 2:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}
/* count digits, white spaces, others */
void example1C1_6() {
	int c, i, nwhite, nother;
	c = i = nwhite = nother = 0;
	int ndigit[10] = { 0 };

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c - '0'];
		}
		else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		}
		else {
			++nother;
		}
	}

	printf("digits =");
	for (i = 0; i < 10; i++) {
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
}//Chapter 1.6 Exercises-----------------------------------------------//

/*-------


-------*/

//Chapter 1.9 Exercises-----------------------------------------------//
void chapter1_9Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Example 1\n\n");
	printf("  2 - Quit Program\n\n");
}

void chapter1_9() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapter1_9Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			printf("Example 1\n\n");
			example1C1_9();
			trim(1);
			break;
		case 2:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}

#define MAXLINE 1000	/* maximum input line size */
/* getline: read a line into s, return length */
int getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
		if (c == '\n') {
			s[i] = c;
			++i;
		}
	}	
	s[i] = '\0';
	return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}
/* print longest input line */
void example1C1_9() {
	int len;			/* current line length */
	int max;			/* maximum length seen so far */
	char line[MAXLINE];			/* current input line */
	char longest[MAXLINE];		/* longest line saved here*/

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) { /* there was a line */
		printf("%s", longest);
	}
}
#undef MAXLINE
//Chapter 1.9 Exercises-----------------------------------------------//