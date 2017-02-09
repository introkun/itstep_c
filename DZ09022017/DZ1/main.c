#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

#define N 10


/*
В одномерном массиве, состоящем из N вещественных чисел вычислить:
• Сумму отрицательных элементов
• Произведение элементов, находящихся между min и max элементами
• Произведение элементов с четными номерами
*/

void vishitatSummuOtricatelnih(int array[], int dlinaMassiva);
void proizvedenieElementov(int array[], int dlinaMassiva);
void proizvedenieElementovChet(int array[], int dlinaMassiva);



int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int array[N];
	int dlinaMassiva = N;
	for (int i = 0; i < N; i++)
	{
		array[i] = -5 + rand() % 10;
		printf("%i,  ", array[i]);
	}
	printf("\n");
	vishitatSummuOtricatelnih(array, dlinaMassiva);
	proizvedenieElementov(array, dlinaMassiva);
	proizvedenieElementovChet(array, dlinaMassiva);
	
	return 0;
}

void vishitatSummuOtricatelnih(int array[], int dlinaMassiva)
{

	int count = 0;
	for (int i = 0; i < dlinaMassiva; i++)
	{
		if (array[i] < 0)
		{
			count = count + array[i];
		}
	}
	printf("Сумма отрицательных элементов = %i\n", count);
}


void proizvedenieElementov(int array[], int dlinaMassiva)
{
	int max;
	int min;
	int proizvedenie = 1;

	for (int i = 0; i < dlinaMassiva; i++)
	{
		if (i == 0)
		{
			max = array[0];
			min = array[0];
		}
		if (max < array[i])
		{
			max = array[i];
		}
		if (min > array[i])
		{
			min = array[i];
		}
		if (array[i] != max && array[i] != min)
		{
			proizvedenie = proizvedenie * array[i];
		}
	}
	printf("Произведение элементов  между минимальным и максимальным значением = %i\n", proizvedenie);
}

void proizvedenieElementovChet(int array[], int dlinaMassiva)
{
	
	int proizvedenie = 1;

	for (int i = 0; i < dlinaMassiva; i++)
	{
		
		if (array[i]>0 && array[i] %2 == 0)
		{
			proizvedenie = proizvedenie * array[i];
		}
	}
	printf("Произведение чётных элементов = %i\n", proizvedenie);
}

