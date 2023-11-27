#include <stdio.h>
#include <stdlib.h>

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

		printf("Press Enter to generate the histogram.\n");
		//stores wl to wla
		while ((c = getchar()) != 10) {
			if (c == ' ' || c == '\t' || c == 10) {
				if (wl > 0 && wl < WRANGE - 1) { ++wla[wl]; }
				if (wl >= WRANGE - 1) { ++wla[WRANGE - 1]; }
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
			for (j = 1; j < WRANGE - 1; j++) {
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

/*
exercise1_14()

Periodic sequence makes the percentages additions uncorrect.
*/
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
		c = i = j = y = z = 0;
		ASCII_total_sum = current_char_frequency = 0;

		//parameters for printing 
		int a, b, d, e;
		a = b = d = e = 2;

		printf("Press Enter to generate the histogram.\n");
		//store chars
		while ((c = getchar()) != 10) {
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
			//!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~0000
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
}

void main() {
	chapter1_6();
}