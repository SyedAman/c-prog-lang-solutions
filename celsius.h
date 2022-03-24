#include <stdio.h>

int fromFahr(int fahrenheit)
{
	return 5 * (fahrenheit - 32) / 9;
}

void printFahrenheitRange(int lower, int upper, int skip)
{
	int fahrenheit = lower;
	int celsius;

	while (fahrenheit <= upper)
	{
		celsius = fromFahr(fahrenheit);
		printf("%d\t%d\n", fahrenheit, celsius);
		fahrenheit += skip;
	}
}