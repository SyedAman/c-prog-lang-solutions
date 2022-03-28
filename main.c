#include "hello.h"
#include "celsius.h"

int main()
{
	sayHello();

	printFahrenheitRange(0, 300, 20);

	printCelsiusRange(0, 300, 20);

	promptConvertFahr();

	return 0;
}
