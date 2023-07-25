#include <stdio.h>
#include "mylib.h"
#include "chapter1.h"

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
			chapter1_3();
			break;
		case 4:
			chapter1_3();//mixed in with 1.3
			break;
		case 5:
			chapter1_5();
			break;
		case 6:
			chapter1_6();
			break;
		case 7:
			chapter1_7();
			break;
		case 8:
			//chapter1_8(); No Exercise in This SubChapter
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
	printf("  1 - Exercise 1-1: Run \"Hello, World\"\n\n");
	printf("  2 - Exercise 1-2: Experiment to find out what happens when printf's\n");
		printf("  argument string contains \\c, where c is some character not listed above.\n\n");
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
			printf("Exercise 1-1:\n\n");
			exercise1_1();
			trim(1);
			break;
		case 2:
			trim(0);
			printf("Exercise 1-2:\n\n");
			exercise1_2();
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

void exercise1_1() {	
	printf("Hello, World! :)");
}

void exercise1_2() {
	printf("Hello, \\yWorld! :)");
}//Chapter 1.1 Exercises-----------------------------------------------//

//Chapter 1.2 Exercises-----------------------------------------------//
void chapter1_2Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Exercise 1-3: Modify the temperature conversion program to print a heading above the table.\n\n");
	printf("  2 - Exercise 1-4: Write a program to print the corresponding Celsius to Fahrenheit table\n\n");
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
			printf("Exercise 1-3:\n\n");
			exercise1_3();
			trim(1);
			break;
		case 2:
			trim(0);
			printf("Exercise 1-4:\n\n");
			exercise1_4();
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

void exercise1_3() {//copyNpaste from pg 12. 
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		float fahr, celcius;
		int lower, upper, step, symbol;

		lower = 0;
		upper = 300;
		step = 20;
		symbol = 248;

		printf(" %cF |  %cC\n", symbol, symbol);//exercise requirement
		printf("----------\n");//exercise requirement

		fahr = lower;
		while (fahr <= upper)
		{
			celcius = (5.0 / 9.0) * (fahr - 32.0);
			printf("%3.0f %6.1f\n", fahr, celcius);
			fahr = fahr + step;
		}
		x = restart();
	}
}

void exercise1_4() {//just inverted from F > C to C > F
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		float fahr, celcius;
		int lower, upper, step, symbol;

		lower = 0;
		upper = 300;
		step = 20;
		symbol = 248;

		printf(" %cC |  %cF\n", symbol, symbol);
		printf("----------\n");

		celcius = lower;
		while (celcius <= upper)
		{
			fahr = ((9.0 / 5.0) * celcius) + 32;
			printf("%3.0f %6.1f\n", celcius, fahr);
			celcius = celcius + step;
		}
		x = restart();
	}
}//Chapter 1.2 Exercises-----------------------------------------------//

//Chapter 1.3(4) Exercises-----------------------------------------------//
void chapter1_3Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Exercise 1-5: Modify the temperature conversion program to print the table in\n");
		printf("  reverse order, that is, from 300 degrees to 0.\n\n");
	printf("  2 - Quit Program\n\n");
}

void chapter1_3() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapter1_3Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			printf("Exercise 1-5:\n\n");
			exercise1_5();
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

void exercise1_5() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		//exercise 1-5. from page 14 and #define explanation that follows(1.4)
	#define UPPER 300
	#define LOWER 0
	#define STEP 20
		int fahr;
		printf(" %cF |  %cC\n", 248, 248);
		printf("----------\n");
		for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
		{
			printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
		}
		x = restart();
}
#undef UPPER
#undef LOWER
#undef STEP
}//Chapter 1.3(4) Exercises-----------------------------------------------//

//Chapter 1.5 Exercises-----------------------------------------------//
void chapter1_5Text() {
	printf("  0 - Go Back\n");
	printf("  1 - Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.\n\n");
	printf("  2 - Exercise 1-7: Write a program to print the value of EOF.\n\n");
	printf("  3 - Exercise 1-8: Write a program that counts blanks, tabs and newlines.\n\n");
	printf("  4 - Exercise 1-9: Write a program to copy its input to its output, replacing each string\n");
		printf("  of one or more blanks by a single blank.\n\n");
	printf("  5 - Exercise 1-10: Write a program to copy its input to its output, replacing each tab by\n");
		printf("  \\t, each backspace by \\b, and each backslash by\\\\. this makes tabs and backspaces\n");
		printf("  visible in an unambiguous way.\n\n");
	printf("  6 - Exercise 1-11: How would you test the word count program? What kinds of input are more\n");
		printf("  likely to uncover bugs if there are any?\n\n");
	printf("  7 - Exercise 1-12: Write a program that prints its input one word per line.\n\n");
	printf("  8 - Quit Program\n\n");
}

void chapter1_5() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapter1_5Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			printf("Exercise 1-6:\n\n");
			exercise1_6();
			trim(1);
			break;
		case 2:
			trim(0);
			printf("Exercise 1-7:\n\n");
			exercise1_7();
			trim(1);
			break;
		case 3:
			trim(0);
			printf("Exercise 1-8:\n\n");
			exercise1_8();
			trim(1);
			break;
		case 4:
			trim(0);
			printf("Exercise 1-9:\n\n");
			exercise1_9();
			trim(1);
			break;
		case 5:
			trim(0);
			printf("Exercise 1-10:\n\n");
			exercise1_10();
			trim(1);
			break;
		case 6:
			trim(0);
			printf("Exercise 1-11:\n\n");
			exercise1_11();
			trim(1);
			break;
		case 7:
			trim(0);
			printf("Exercise 1-12:\n\n");
			exercise1_12();
			trim(1);
			break;
		case 8:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}

void exercise1_6() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		printf("type a single char/int: ");
		int c = (getchar() != EOF);
		getchar();//trash enter key
		printf("\nThe expression: ");
		printf("int x = (getchar() != EOF);\n");
		printf("is: %d", c);
		x = restart();
	}	
}

void exercise1_7() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		int y = EOF;
		printf("EOF is: %d", y);
		x = restart();
}
}

void exercise1_8() {	
		unsigned int blanks, tabs, input, activate;
		blanks = tabs = input = activate = 0;
		int newlines = -1;
		printf("NEWLINES can only be counted SEPARATELY and individually.\n");
		printf("Press Enter to start and \"Ctrl + z\" to stop.\n");
		while ((input = getchar()) != EOF) {
			//input = getchar(); case 10 recycles the Enter key
			switch (input) {
			case 32://blanks
				blanks++;
				activate = 1;
				break;
			case 9://tabs
				tabs++;
				activate = 1;
				break;
				//Since the Enter key is always conputed as an input, case 10 will always be run last.
				//The if statement only adds new lines when blanks and tabs were not typed so activate remains 0
			case 10://newlines
				if (activate == 0) { newlines++; }
				activate = 0;
				printf("\nBlanks are: %d\nTabs are: %d\nNewlines are: %d\n", blanks, tabs, newlines);
				break;
			default:
				break;

			}
		}
}

void exercise1_9() {
		int input, space;
		input = space = 0;
		printf("Press \"Ctrl + z\" to stop.\n");
		while ((input = getchar()) != EOF) {
			switch (input)
			{
			case 32:
				space = 1;
				break;
			case 9:
				space = 1;
				break;
			case 10:
				printf("\n");//adds a new line after all chars have been read
				break;
			default:
				if (space == 0) { printf("%c", input); }
				if (space == 1) { printf(" %c", input); }
				space = 0;
				break;
			}
		}
}

void exercise1_10() {
		int input = 0;
		printf("Press \"Ctrl + z\" to stop.\n");
		while ((input = getchar()) != EOF) {
			switch (input)
			{
			case 8://backspace
				printf("\\b");//Can't read it due to compiler build
				break;
			case 9://tab
				printf("\\t");
				break;
			case 92://backslash
				printf("\\\\");
				break;
			default:
				printf("%c", input);
				break;
			}
			input = 0;
		}
}

void exercise1_11() {//Copy&Paste from pg 20. With some ajustments
#define IN 1 /* inside of a word */
#define OUT 0 /* outside of a word */
	printf("\nDebug log bellow function 'void exercise1_11() {' definition.\n");
	/* count lines, words, and characters in input*/
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	printf("Press \"Ctrl + z\" to stop.\n");
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == 10) {
			--nc;
			printf("Lines: %d; Words: %d; Chars: %d\n", nl, nw, nc);//recycle Enter key
			nl = nw = nc = 0;
		}
		if (c == ' ' || c == '\n' || c == '\t')//c == '\n' is useless here
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
#undef IN
#undef OUT
}
/*
--------From mylib.c
The Enter Key issue:
	In order to run commands/functions the enter key is required. If we prompt the user to type something
e.g "Type your name", the user will type his name, let's say Bill and press enter. The program will read all 4 letters
AND also the enter key which was used to execute the program. So you have 5 chars on a 4 char name. Therefore, the enter
key must be "trashed" in order to get programs to run as expected.
	FIX: Change the "run program" function or create a "newline" function to AnyKey + Enter(LCtrl + Enter). Like ^+Enter for
	the windows CMD.
--------xxxxxxxxxxxx

BUGS:
01: Enter key is the last input ran by the program
		- FIX: added an 'if' for the Enter key(char 10 - ANSCII)

02: Can't print the result
		- FIX: Since we are running a function inside a funcion, the only way to print the result in the original program
		provided by the book would be to end the execution of 'exercise1_11()'. Using the 3rd 'if (c == 10)' we not only discard
		the enter key which is always the last input, but also are able to print the result.

03: 'Enter' is being added as a char(nc)
		- FIX: '--nc' on 'if (c == 10)'

04(Not a Bug): Since the enter key is a "problem" for these exercises, makes sense to reset the count after each Enter.
There is a nice fix on exercise1_8() which requires to count the enter Key.

05: space is counted as a char
		- FIX: Makes sense to put a counter for spaces alone

06: Consecutives Spaces and Tabs get counted as a new Word
		- FIX:Made 'if (c == 10)' the second if. if, else if order demands that 'if (c == ' ' || c == '\n' || c == '\t')' be 
		followed by 'else if (state == OUT)'. This way, if you press multiple spaces, ++

07: Numbers are considered words/letters.
		- FIX: None... No need to waste more time here.
*/


void exercise1_12() {
	char c;
	printf("Press \"Ctrl + z\" to stop.\n");
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == 10) { printf("\n"); }
		else { printf("%c", c); }
	}
}//Chapter 1.5 Exercises-----------------------------------------------//

//Chapter 1.6 Exercises-----------------------------------------------//
void chapter1_6Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Exercise 1-13: Write a program to print a histogram of the lengths of words in its input. It is easy\n");
		printf("to draw the histogram with the bars horizontal; a vertical orientation is more challenging.\n\n");
	printf("  2 - Exercise 1-14: Write a program to print a histogram of the frequencies of diferent characters in its input.\n\n");
	printf("  3 - Quit Program\n\n");
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
			printf("Exercise 1-13:\n\n");
			exercise1_13();
			trim(1);			
			break;
		case 2:
			trim(0);
			printf("Exercise 1-14:\n\n");
			exercise1_14();
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

void exercise1_13() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
#define WRANGE 21
		char c;
		int i, j, k, y, wl, start, stop, skip, big, small, write, word_count_copy, large_digits, small_digits, current_digits;
		i = j = k = y = wl = start = stop = skip = big = small = write = word_count_copy = large_digits = small_digits = current_digits = 0;
		//wl = Word Length
		int wla[WRANGE] = { 0 };//Word Length Array
		int wla_copy[WRANGE] = { 0 };

		printf("Press 'Ctrl + z' to generate the histogram.\n");
		//stores wl to wla
		while ((c = getchar()) != EOF) {
			if (c == ' ' || c == '\t' || c == 10) {
				if (wl > 0 && wl < WRANGE-1) { ++wla[wl]; }
				if (wl >= WRANGE-1) { ++wla[WRANGE-1]; }
				wl = 0;
			}
			else { ++wl; }
		}//---

		//copy & paste
		for (i = 0; i < WRANGE; i++) {
			wla_copy[i] = wla[i];
		}//---
		//sorting smallest to biggest
		for (i = 1; i < WRANGE; i++) {
			for (j = 1; j < WRANGE-1; j++) {
				if (wla_copy[j] > wla_copy[j + 1]) {
					word_count_copy = wla_copy[j];
					wla_copy[j] = wla_copy[j + 1];
					wla_copy[j + 1] = word_count_copy;

				}
			}
		}//---
		//Determines the index range for numbers greater then 0
		for (i = 0; i < WRANGE; i++) {
			if (wla[i] != 0) {
				stop = i;									//last index with value > 0
				if (skip == 0) { start = i; skip = 1; }		//first index with value > 0
			}
		}//---
		//Determines the biggest and smallest amount of words counted
		small = 100;
		for (i = 0; i < WRANGE; i++) {
			if (wla[i] < small) { small = wla[i]; }		//smallest count of words
			if (wla[i] > big) { big = wla[i]; }			//biggest count of words
		}
		//---
		//Determines the initial spacing needed from Y axis to the first column
		for (i = big; i > 0; i = i / 10) {
			large_digits++;								//individual digits for big
		}
		for (i = small; i > 0; i = i / 10) {
			small_digits++;								//individual digits for small
		}//---

		//Print Results
		while (y != -1) {
			printf("\n0 - Exit | 1 - Horizontal Bars | 2 - Vertical Bars | 3 - Table\n");
			y = inputInt();
			printf("\n");
			//Exit
			if (y == 0) { y = -1; }

			//Horizontal---
			else if (y == 1) {
				printf("|>Word Length\n|");
				for (i = stop; i >= start; i--) {
					if (wla[i] != 0) {
						printf("\n%d", i);
						for (j = i; j > 0; j = j / 10) {
							current_digits++;
						}
						large_digits = 3;
						for (j = large_digits - current_digits; j >= 0; j--) {
							printf("-");
						}
						current_digits = 0;
						printf("-");
						for (j = 1; wla_copy[j] < wla[i]; j++) {
							if (wla_copy[j - 1] != wla_copy[j] && wla_copy[j] != 0) {
								printf("----");
							}
							for (k = wla_copy[j]; k > 10; k = k / 10) {

								if (k > 1 && wla_copy[j] != 0) {
									printf("-");
								}
							}
						}
						printf("\n|");
					}
				}
				skip = 0;
				for (i = 0; i < WRANGE; i++) {
					for (j = i; j < WRANGE; j++) {
						if (wla_copy[j] == wla_copy[i]) { skip++; }
					}
					if (skip <= 1 && wla_copy[i] != 0) {
						printf("---%d", wla_copy[i]);
					}
					skip = 0;
				}
			}//---

			//Vertical---
			else if (y == 2) {
				//Y axis
				printf("|>Word Count\n|\n|");
				for (i = big; i >= small; i--) {
					//shortens the columns.(usefull for long texts)
					for (j = start; j <= stop; j++) { 
						if (wla[j] == i) { 
							write = 1; 
						} 
					}
					//Y axis (Bars)
					if (write == 1) {
						if (i > 0) { printf("\n%d", i); }
						//spacing between Y axis and first column
						for (j = i; j > 0; j = j / 10) {
							current_digits++;
						}
						if (large_digits < 3) { large_digits = 3; }
						for (j = large_digits - current_digits; j >= 0; j--) {
							printf(" ");							
						}
						current_digits = 0;
						//Y axis; where the numbers in Y are present
						for (j = start; j <= stop; j++) {
							if (wla[j] != 0 && i != 0) {
								if (j != start) { 
									printf("  ");
								}
								if (wla[j] < i) { printf("   "); }
								if (wla[j] > i) { printf("|X|"); }
								if (j > 0 && wla[j] == i && i > 0) { printf("[Y]", i); }
							}
						}
						//extra spacing between Y axis numbers
						if (i != small) { printf("\n|"); }//newline for spacing
						for (j = large_digits; j > 0; j--) {//space between Y axis and first column
							printf(" ");
						}
						for (j = start; j <= stop; j++) {
							if (wla[j] != 0 && i != 0) {
								if (j != start)printf("  ");
								if (wla[j] < i) { printf("   "); }
								if (wla[j] >= i) { printf("|X|"); }
							}
						}
					}
					write = 0;
					
				}
				//X axis (axis)
				printf("\n|");
				if (large_digits < 4) { large_digits = 3; }
				for (i = large_digits; i >= 0; i--) {//initial spacing 0 to 1(word length)
						printf("-");
					}
				printf("%d", start);
				for (i = start; i <= stop; i++) {
					if (wla[i] != 0 && i < 11 && i != start) { printf("----%d", i); }
					if (wla[i] != 0 && i >= 11) { printf("---%d", i); }
				}
				printf("--> Word Length");
			}//---

			//Table---
			else if (y == 3) {
				for (i = 0; i < WRANGE; i++) { 
					if (wla[i] != 0) { 
						printf("\nlength %d: %d", i, wla[i]); 
					}
				}
			}//---

			else { y = 0; }//Wrong input handler
		}
#undef WRANGE
		x = restart();
	}
}


void exercise1_14() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
#define RANGE 128
		float ASCII[RANGE] = { 0 };
		float ASCII_COPY[RANGE] = { 0 };
		float ASCII_FREQUENCY[RANGE] = { 0 };
		float ASCII_FREQUENCY_SORTED[RANGE] = { 0 };
		int c, i, j, y, z;
		float ASCII_total_sum, current_char_frequency;
		c = i = j = y = z = ASCII_total_sum = current_char_frequency = 0;

		//parameters for printing 
		int a, b, d, e;
		a = b = d = e = 2;

		printf("Press 'Ctrl + z' to generate the histogram.\n");
		//store chars
		while ((c = getchar()) != EOF) {
			++ASCII[c];
		}//---
		//discard unused/not needed chars
		for (i = 0; i < RANGE; i++) {
			if (i < 32 && i != 10 && i != 9) { ASCII[i] = 0; }
		}
		ASCII[127] = 0;
		//---
		//Select Data For Histogram
		do {
			printf("\n0 - Exit");
			printf("\n1 - All Chars");
			printf("\n2 - Numbers");
			printf("\n3 - Special Chars");
			printf("\n4 - Alphabet");
			printf("\n5 - Separate Upper and Lower Case\n\n");

			do {
				z = getchar();
				//Prints All chars
				if (z == 49) { a = b = d = e = 1; }				
				//Prints Numbers
				if (z == 50) { a++; }			
				//Prints Alphabet
				if (z == 51) { b++; }				
				//Prints Upper and Lower Separatly
				if (z == 52) { d++; }				
				//Prints Special Chars
				if (z == 53) { e++; }
			} while (z != 10);

			z = 0;
			//On/Off Log
			printf("All Chars:        ");
			if (a % 2 != 0 && b % 2 != 0 && d % 2 != 0 && e % 2 != 0) { 
				printf("ON\n"); 
				a = b = d = e = 1; 
			}
			if (a % 2 == 0 || b % 2 == 0 || d % 2 == 0 || e % 2 == 0) {
				printf("OFF\n"); 
			}

			printf("Numbers:          ");
			if (a % 2 != 0) { 
				printf("ON\n"); 
				a = 1; 
			}
			if (a % 2 == 0) {
				printf("OFF\n");
				a = 0; 
			}

			printf("Special Chars:    ");
			if (b % 2 != 0) { 
				printf("ON\n"); 
				b = 1; 
			}
			if (b % 2 == 0) {
				printf("OFF\n"); 
				b = 0; 
			}

			printf("Alphabet:         ");
			if (d % 2 != 0) { 
				printf("ON\n"); 
				d = 1; 
			}
			if (d % 2 == 0) {
				printf("OFF\n"); 
				d = 0; 
			}

			printf("Separate Upper\n");
			printf("and Lower Case:   ");
			if (e % 2 != 0) { 
				printf("ON\n"); 
				e = 1; 
			}
			if (e % 2 == 0) {
				printf("OFF\n");
				e = 0; 
			}

			printf("Confirm?(Y/N)");
			y = getchar();
			getchar();
			ASCII_total_sum = 0;
			for (i = 0; i < RANGE; i++) {
				ASCII_FREQUENCY[i] = 0;
				ASCII_FREQUENCY_SORTED[i] = 0;
				ASCII_COPY[i] = 0;
			}
			for (i = 0; i < RANGE; i++) {
				ASCII_COPY[i] = ASCII[i];
			}
			//!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~  SPACE/LF/TAB
			if (y == 89 || y == 121) {
				//Calculate ASCII_total_sum
				for (i = 0; i < RANGE; i++) {
					ASCII_total_sum += ASCII_COPY[i];
				}
				//discard 
				for (i = 0; i < RANGE; i++) {
					//Numbers
					if (a != 1 && i >= 48 && i <= 57) { ASCII_COPY[i] = 0; }
					//Special Chars
					if (b != 1 && i <= 47) { ASCII_COPY[i] = 0; }
					if (b != 1 && i >= 58 && i <= 64) { ASCII_COPY[i] = 0; }
					if (b != 1 && i >= 91 && i <= 96) { ASCII_COPY[i] = 0; }
					if (b != 1 && i >= 123) { ASCII_COPY[i] = 0; }
					//Alphabet
					if (d != 1 && i >= 65 && i <= 90) { ASCII_COPY[i] = 0; }
				}//---				
				//Frequency Calculation
				for (i = 0; i < RANGE; i++) {
					//Numbers
					if (a == 1 && i >= 48 && i <= 57) { ASCII_FREQUENCY[i] = (ASCII[i] * 100) / ASCII_total_sum; }
					//Special Chars
					if (b == 1 && i <= 47) { ASCII_FREQUENCY[i] = (ASCII[i] * 100) / ASCII_total_sum; }
					if (b == 1 && i >= 58 && i <= 64) { ASCII_FREQUENCY[i] = (ASCII[i] * 100) / ASCII_total_sum; }
					if (b == 1 && i >= 91 && i <= 96) { ASCII_FREQUENCY[i] = (ASCII[i] * 100) / ASCII_total_sum; }
					if (b == 1 && i >= 123) { ASCII_FREQUENCY[i] = (ASCII[i] * 100) / ASCII_total_sum; }
					//Alphabet
					if (d == 1 && e != 1 && i >= 65 && i <= 90) { ASCII_FREQUENCY[i] = ((ASCII[i] + ASCII[i + 32]) * 100) / ASCII_total_sum; }
					//Alphabet Separated
					if (d == 1 && e == 1 && i >= 65 && i <= 90) { ASCII_FREQUENCY[i] = (ASCII[i] * 100) / ASCII_total_sum; }
					if (d == 1 && e == 1 && i >= 97 && i <= 122) { ASCII_FREQUENCY[i] = (ASCII[i] * 100) / ASCII_total_sum; }
				}//---
				//Copy and sort frequencies
				for (i = 0; i < RANGE; i++) {
					ASCII_FREQUENCY_SORTED[i] = ASCII_FREQUENCY[i];
				}
				for (i = 0; i < RANGE; i++) {
					for (j = 0; j < RANGE - 1; j++) {
						if (ASCII_FREQUENCY_SORTED[j] > ASCII_FREQUENCY_SORTED[j + 1]) {
							current_char_frequency = ASCII_FREQUENCY_SORTED[j];
							ASCII_FREQUENCY_SORTED[j] = ASCII_FREQUENCY_SORTED[j + 1];
							ASCII_FREQUENCY_SORTED[j + 1] = current_char_frequency;

						}
					}
				}//---
				printf("Percentage\n|\n|\n");
				for (i = RANGE - 1; i > 30; i--) {
					if (ASCII_FREQUENCY_SORTED[i] != 0 && ASCII_FREQUENCY_SORTED[i] != ASCII_FREQUENCY_SORTED[i - 1]) {
						//Row with the percentage - Percentage and Initial Spacing.
						printf("%0.2f%c", ASCII_FREQUENCY_SORTED[i], 37);
						if (ASCII_FREQUENCY_SORTED[i] < 10) { printf("     "); }
						if (ASCII_FREQUENCY_SORTED[i] > 9.99 && ASCII_FREQUENCY_SORTED[i] < 100) { printf("    "); }
						if (ASCII_FREQUENCY_SORTED[i] > 99.99) { printf("   "); }
						//Row with the percentage - column printing
						for (j = 0; j < RANGE; j++) {
							if (ASCII_FREQUENCY[j] != 0) {
								if (ASCII_FREQUENCY[j] == ASCII_FREQUENCY_SORTED[i]) { printf("[Y]"); }
								else if (ASCII_FREQUENCY[j] > ASCII_FREQUENCY_SORTED[i]) { printf("[X]"); }
								else { printf("   "); }
								printf("   ");
							}
						}
						printf("\n|         ");
						for (j = 0; j < RANGE; j++) {
							if (ASCII_FREQUENCY[j] != 0) {
								if (ASCII_FREQUENCY[j] >= ASCII_FREQUENCY_SORTED[i]) { printf("[X]"); }
								else { printf("   "); }
								printf("   ");
							}
						}
						printf("\n");
					}
				}
				printf("|-------");
				for (i = 0; i < RANGE; i++) {
					if (ASCII_FREQUENCY[i] != 0) {
						if (i != 9 && i != 10 && i != 32 && i != 45) { printf("--{%c", i); }
						if (i == 9) { printf("--{%d", i); }
						if (i == 10 || i == 32 || i == 45) { printf("-{%d", i); }
						if (i < (RANGE - 1)) { printf("}-"); }
					}

				}
				printf("\n\nPress (Y/y)\nto generate another histogram with the most recent input.\n");
				y = getchar();
				getchar();
				if (y == 89 || y == 121) {
					y = 0;
					a = b = d = e = 2;
				}
				else { y = -1; }
			}
			else {
				y = 0;
				a = b = d = e = 2;
			}

		} while (y != -1);//---
#undef RANGE
		x = restart();
	}
}//Chapter 1.6 Exercises-----------------------------------------------//


//Chapter 1.7 Exercises-----------------------------------------------//
void chapter1_7Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Exercise 1-15: Rewrite the temperature conversion program of\n");
	printf("  Section 1.2 to use a function for conversion.\n\n");
	printf("  2 - Quit Program\n\n");
}

void chapter1_7() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		chapter1_7Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			printf("Exercise 1-15:\n\n");
			exercise1_15();
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

void calculate_temperature_1_15(int fahr, int upper, int celcius, int step) {
	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr = fahr + step;
	}
}

void exercise1_15() {
	int fahr, celcius;
	int lower, upper, step;

	celcius = 0;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	calculate_temperature_1_15(fahr, upper, celcius, step);
}//Chapter 1.7 Exercises-----------------------------------------------//

//Chapter 1.8 has no exercises.

//Chapter 1.9 Exercises-----------------------------------------------//
void chapter1_9Text() {
	printf("  0 - Go Back\n\n");
	printf("  1 - Exercise 1-16: Revise the main routine of the logest-line program so it will correctly\n");
	printf("  print the length of arbitrarily long input lines, and as much as possible of the text.\n\n");
	printf("  2 - Exercise 1-17: Write a program to print all input lines that are longer than 80 characters\n\n");
	printf("  3 - Exercise 1-18: Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.\n\n");
	printf("  4 - Exercise 1-19: Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time\n\n");
	printf("  5 - Quit Program\n\n");
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
			printf("Exercise 1-16:\n\n");
			exercise1_16();
			trim(1);
			break;
		case 2:
			trim(0);
			printf("Exercise 1-17:\n\n");
			exercise1_17();
			trim(1);
			break;
		case 3:
			trim(0);
			printf("Exercise 1-18:\n\n");
			exercise1_18();
			trim(1);
			break;
		case 4:
			trim(0);
			printf("Exercise 1-19:\n\n");
			exercise1_19();
			trim(1);
			break;
		case 5:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}

#define MAXLINE 2000
void exercise1_16() {
	
}

void exercise1_17() {
#define MAXCHARS 80
	/*int c, i, count_single_input;
	int *temporary_array_size = ;
	int temporary_array[temporary_array_size], stupid_array[temporary_array_size];
	c = i = count_single_input = temporary_array[temporary_array_size] = stupid_array[temporary_array_size] = 0;

	while ((c = getchar()) != EOF) {
		if (c != 10) {
			count_single_input++;
			temporary_array_size = count_single_input;
			temporary_array[temporary_array_size - 1];
		}
		else {
			if (count_single_input > 80) {
				for (i = 0; i < temporary_array_size; i++) { stupid_array[i] = temporary_array[i]; }
			}
			count_single_input = 0;
			temporary_array_size = 1;
		}
	}*/
#undef MAXCHARS
}

void exercise1_18() {

}

void exercise1_19() {

}
#undef MAXLINE
//Chapter 1.9 Exercises-----------------------------------------------//




/*!!!!!!!!!!

REVIEW CHAPTER 1.6!!!!!!!!!!!!!!!!!!!!!!!!!!!!

*/


/*DO NOT DELETE!
int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
for (x = 0; x != -1;) {
	//code here
	x = restart();
}
*/




/*
I have no idea what I did. I'm saving this older code just because.

void exercise1_17() {
	int i, k, size_controll;
	i = k = size_controll = 0;
	char c = '!';
	char line[MAXLINE];

	while (c != EOF) {
		i = 0;
		while (c != '\n' || c != EOF || i != (MAXLINE - 1)) {
			c = getchar();
			line[i] = c;
			if (c == '\n' && i < (MAXLINE - 1)) {
				line[i + 1] = '\0';
			}
			if (i == (MAXLINE - 1)) {
				line[i] = '\0';
			}
			i++;
		}
		size_controll = i;
		if (i >= size_controll && i > 80) {
			// :)
		}
		else {
			for (k = 0; k < MAXLINE; k++) { line[k] = 0; }
		}
	}
	for (i = 0; i < size_controll; i++) {
		printf("%s", line);
	}
}
*/