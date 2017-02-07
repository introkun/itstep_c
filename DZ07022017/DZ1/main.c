#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define RAND_NUMBERS 10

/*
Задание 1: В одномерном массиве, заполненном случайными числами, определить
минимальный и максимальный элементы.
*/


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int mass[RAND_NUMBERS];
	int max;
	int min;
	for (int i = 0; i < RAND_NUMBERS; i++)
	{
		mass[i] = rand() % 100;
		printf("%i = %i\n", i, mass[i]);

		if (i == 0)
		{
			max = mass[0];
			min = mass[0];
		}
		if (max < mass[i])
		{
			max = mass[i];
		}
		if (min > mass[i])
		{
			min = mass[i];
		}
	}

	printf("Максимальное число = %i\n"
		"Минимальное число = %i\n", max, min);

	return 0;
}
