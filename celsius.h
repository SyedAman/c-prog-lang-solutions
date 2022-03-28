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
		printf("%3d\t%6d\n", fahrenheit, celsius);
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

