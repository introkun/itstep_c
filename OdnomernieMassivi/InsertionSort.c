#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define SIZE 10

//Сортировка вставками

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int array[SIZE];
	int dlinaMassiva = SIZE;

	for (int i = 0; i < dlinaMassiva; i++)
	{
		array[i] = rand() % 100;
		printf("%i, ", array[i]);
	}
	printf("\n");

	for (int i = 0; i < dlinaMassiva; i++)
	{
		int x = array[i];
		int j = i;
		while (j > 0 && array[j - 1] > x)
		{
			array[j] = array[j - 1];
			j = j - 1;
		}
		array[j] = x;
	}

	for (int i = 0; i < dlinaMassiva; i++)
	{		
		printf("%i, ", array[i]);
	}
	printf("\n");

	return 0;
}
