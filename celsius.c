#include <stdio.h>

#include "celsius.h"

float fromFahr(float fahrenheit)
{
	return 5.0 / 9.0 * (fahrenheit - 32);
}

void printFahrenheitRange(int lower, int upper, int skip)
{
	float fahrenheit, celsius;
	fahrenheit = lower;

	while (fahrenheit <= upper)
	{
		celsius = fromFahr(fahrenheit);
		printf("%3.0f\t%6.01f\n", fahrenheit, celsius);
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

