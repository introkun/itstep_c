#include <stdio.h>
#include <locale.h>

void printStars(int starCount);

long long factorial(int n);

int main()
{
	setlocale(LC_ALL, "rus");
	int n = 4;
	printf("%ld \n", factorial(n));
	return 0;
}

int main646845486()
{
	setlocale(LC_ALL, "rus");
	int const starCount = 10;
	printStars(starCount);
	printf("\n");
	return 0;
}

long long factorial(int n)
{
	//Факториал числа
	if (n<2)
	{
		return 1;
	}
	return n*factorial(n-1);
}


void printStars(int starCount)
{
	// Рекурсия. Рисуем звёзды.
	if (starCount>0)
	{				
		printf("*");
		printStars( starCount-1);
	}	
	
}
