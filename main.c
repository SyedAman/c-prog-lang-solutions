#include "hello.h"
#include "celsius.h"

int main()
{
	sayHello();

	printFahrenheitRange(0, 300, 20);


	int inFahr;
	printf("What degrees Fahrenheit do you want to convert to Celsius?: ");
	scanf("%d", &inFahr);
	printf("You want to convert %dF to Celsius. Computing...\n", inFahr);
	int outCelsius = fromFahr(inFahr);
	printf("%dF in Celsius is %dC.\n", inFahr, outCelsius);

	return 0;
}
