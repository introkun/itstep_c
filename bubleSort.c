#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define SIZE 10

//Сортировка пузырьком

void bubleSort(int array[], int dlinaMassiva);
void swap(int array[], int dlinaMassiva);
void vivodMassiva(int array[], int dlinaMassiva);


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int array[SIZE];
	int dlinaMassiva = SIZE;

	for (int i = 0; i < dlinaMassiva; i++)
	{
		array[i] = rand() % 100;		
	}

	vivodMassiva(array, dlinaMassiva);	
	bubleSort(array, dlinaMassiva);

	return 0;
}


//Сортирует массив
void bubleSort(int array[], int dlinaMassiva)
{
	swap(array, dlinaMassiva);
	vivodMassiva(array, dlinaMassiva);
}


// Меняет значения местами
void swap(int array[], int dlinaMassiva)
{
	for (int i = 0; i < dlinaMassiva - 1; i++)
	{
		for (int j = 0; j < dlinaMassiva - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}


//Выводит массив
void vivodMassiva(int array[], int dlinaMassiva)
{
	for (int i = 0; i < dlinaMassiva; i++)
	{
		printf("%i,  ", array[i]);
		Sleep(100);
	}
	printf("\n");
}
