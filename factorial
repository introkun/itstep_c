#include <stdio.h>
#include <locale.h>


int factorial(int n);

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;		
		printf("Введите число для вычисления факториала: \n");
		scanf("%i", &n);
		printf("Факториал числа %i = %i\n", n, factorial(n));
		return 0;
	}


int factorial(int n)
{	
	if (n == 0)
	{
		return 1;
	}
	else
	{
		int factorial = 1;
		for (int i = 1; i <= n; i++)
		{
			factorial = factorial*i;
		}
		return factorial;
	}
}
