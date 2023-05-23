//My own temperature converter
//Goal, input a measurement and get all conversions e.g. input: 0°C | Output: 32°F & 273,15K
//Generate table with range as input? 0°C to 100°C +1°C. returns 0°C, 1°C, 2°C, 3°C ... 100°C and with the other temps converted.
#include <stdio.h>
#include "BookExercises.h"
#include "mylib.h"
#include "project1.h"

//Do not move---------------------------------------------
void tempConverter() {
	trim(0);
	tempConverterWellcome();
	mainTempConverter();
	trim(1);
}

void tempConverterWellcome() {
	printf("This exercise derived from Chapter 1. A simple temperature converter.\n");
	printf("First type the temperature (e.g. 100), and the the measurement (e.g. C for Celcius).\n");
}

//project1.c main function
void mainTempConverter() {
	int x;//exerciseRepeater() PLACE&HOLDER(mylib.c)
	for (x = 0; x != -1;) {
		char measure;
		float temp;
		printf(">>>\n");
		temp = getTemp();
		measure = getMeasure();
		convert(measure, temp);
		x = restart();
	}	
}//Do not move---------------------------------------------

float getTemp() {
	float temp;
	printf("Type the temperature: ");
	scanf("%f", &temp);
	getchar();
	return temp;
}

char getMeasure() {
	char degree = 248;
	printf("\nChoose the temperature measurement input\n");
	printf("%cC,%cF or K: ", degree, degree);
	char measure = inputChar();
	return measure = checkMeasure(measure);
}

int checkMeasure(int x) {
	char newx;
	if (x == 67 || x == 99) { return 67; }
	else if (x == 70 || x == 102) { return 70; }
	else if (x == 75 || x == 107) { return 75; }
	else {
		printf("\nWrong Input.\nPlease type C(Celsius), F(Fahrenheit) or K(Kelvin).\n");
		newx = inputChar();
		return checkMeasure(newx);
	}
	return 0;
}

float convert(int x, float y) {
	float C, F, K;
	switch (x)
	{
	case 67: //C
		C = y;
		K = calculate(y, 273.15, 1, 0);
		F = calculate(y, 0, 9.0 / 5, 32);
		result(C, F, K, y, x);
		break;
	case 70:  //F
		F = y;
		C = calculate(y, -32, 5.0 / 9, 0);
		K = calculate(y, -32, 5.0 / 9, 273.15);
		result(C, F, K, y, x);
		break;
	case 75:  //K
		K = y;
		C = calculate(y, -273.15, 1, 0);
		F = calculate(y, -273.15, 9.0 / 5, 32);
		result(C, F, K, y, x);
		break;
	default:
		break;
	}
	return 0;
}

int calculate(float input, float num, float frct, float num2) {
	float answer;
	answer = ((input + num) * (frct)) + num2;
	return answer;
}
/*
C = (K - 273.15)   x 1/1   + 0
C = (F - 32    )   × 5/9   + 0
F = (C + 0     )   × 9/5)  + 32
F = (K - 273.15)   × 9/5   + 32
K = (C + 273.15)   x 1/1   + 0
K = (F - 32    )   × 5/9   + 273.15
*/

void result(float C, float F, float K, float y, int x) {//y = inputed temp(int), x = inputed measure(C, F, K)
	printf("---------------------------\n");	
	if (x == 75) { printf("%.0f%c is: ", y, x); }
	if (x != 75) { printf("%.0f%c%c is: ", y, 248, x); }
	if (x != 67) { printf("\n>%.2f%cC", C, 248); }
	if (x != 70) { printf("\n>%.2f%cF", F, 248); }
	if (x != 75) { printf("\n>%.2fK", K); }
	printf("\n---------------------------");
}