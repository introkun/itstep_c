#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

/*
Написать программу, копирующую последовательно элементы одного массива размером
10 элементов в 2 массива размером 5 элементов каждый.
*/

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int array[SIZE];

	for (int i = 0; i < SIZE/2; i++)
	{
		array[i] = rand() % 10;
		printf("%i-й элемент массива \t %i\n", i + 1, array[i]);
	}
	printf("\n");

	for (int i = SIZE / 2; i < SIZE ; i++)
	{
		array[i] = rand() % 10;
		printf("%i-й элемент массива \t %i\n", i + 1, array[i]);
	}
	printf("\n");
	return 0;
}
