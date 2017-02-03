#include <stdio.h>
#include <locale.h>

static int counter = 0; //static статическая  переменная


void foo()
{
	for (int i = 0; i < 10; i++)
	{
		counter++;
	}
	printf("%i\n", counter);
	return 0;
}

int main()
{
	//Область видимости и время жизни
	setlocale(LC_ALL, "rus");
	foo();
	foo();
	foo();
	return 0;
}
