#include <stdio.h>

#include "temperature.h"

float fromFahr(float fahrenheit)
{
	return 5.0 / 9.0 * (fahrenheit - 32);
}

void printFahrenheitRange(int lower, int upper, int skip)
{
	float fahrenheit, celsius;
	fahrenheit = lower;
	
	printf("Fahrenheit\tCelsius\n");
	while (fahrenheit <= upper)
	{
		celsius = fromFahr(fahrenheit);
		printf("%10.0f\t%7.1f\n", fahrenheit, celsius);
		fahrenheit += skip;
	}
}

void promptConvertFahr()
{
	int inFahr;
        printf("What degrees Fahrenheit do you want to convert to Celsius?: ");
        scanf("%d", &inFahr);
        int outCelsius = fromFahr(inFahr);
        printf("%dF in Celsius is %dC.\n", inFahr, outCelsius);
}

float fromCelsius(float celsius)
{
	return 9.0 / 5.0 * celsius + 32;
}

void printCelsiusRange(int lower, int upper, int skip)
{
	float celsius, fahrenheit;
	celsius = lower;
	
	printf("Celsius\tFahrenheit\n");
	while (celsius <= upper)
	{
		fahrenheit = fromCelsius(celsius);
		printf("%7.0f\t%10.1f\n", celsius, fahrenheit);
		celsius += skip;
	}
}
