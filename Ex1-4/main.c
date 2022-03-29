#include "hello.h"
#include "temperature.h"

int main()
{
	sayHello();

	printFahrenheitRange(0, 300, 20);

	printCelsiusRange(0, 300, 20);

	promptConvertFahr();

	return 0;
}
