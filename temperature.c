#include <stdio.h>

#include "temperature.h"

float fromFahr(float fahrenheit)
{
	return 5.0 / 9.0 * (fahrenheit - 32);
}

void printFahrenheitRange(int lower, int upper, int skip)
{
	float fahrenheit, celsius;
	
	printf("Fahrenheit\tCelsius\n");
	for (float fahrenheit = lower; fahrenheit <= upper; fahrenheit += skip)
	{
		celsius = fromFahr(fahrenheit);
		printf("%10.0f\t%7.1f\n", fahrenheit, celsius);
	}
}

void promptConvertFahr()
{
	float inFahr;
        printf("What degrees Fahrenheit do you want to convert to Celsius?: ");
        scanf("%f", &inFahr);
        float outCelsius = fromFahr(inFahr);
        printf("%6.1fF in Celsius is %6.1fC.\n", inFahr, outCelsius);
}

float fromCelsius(float celsius)
{
	return 9.0 / 5.0 * celsius + 32;
}

void printCelsiusRange(int lower, int upper, int skip)
{
	float celsius, fahrenheit;
	
	printf("Celsius\tFahrenheit\n");
	for (float celsius = lower; celsius <= upper; celsius += skip)
	{
		fahrenheit = fromCelsius(celsius);
		printf("%7.0f\t%10.1f\n", celsius, fahrenheit);
	}
}
