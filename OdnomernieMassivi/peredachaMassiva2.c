#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 10

//Передача массива в функцию


void raschetSrednego(int mas[]);
void printMassiv();
int min;
int max;
int unikalnost;
float srednee = 0;
int mas[COUNT];


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
			
	printMassiv();
	raschetSrednego(mas);
	return 0;
}


void printMassiv()
{
	for (int i = 0; i < COUNT; i++)
	{
		mas[i] = rand() % 10;
		int j = 0;
		while (j<i)
		{
			if (mas[i] == mas[j])
			{
				mas[i] = rand() % 10;
				j = 0;
			}
			else
			{
				j++;
			}
		}

		printf("%i ", mas[i]);
		Sleep(100);
	}
	printf("\n");
}


void raschetSrednego(int mas[])
{
	for (int i = 0; i < COUNT; i++)
	{
		if (i == 0)
		{
			max = mas[0];
			min = mas[0];
		
		}
		
		if (max < mas[i])
		{
			max = mas[i];
		}
		if (min > mas[i])
		{
			min = mas[i];
		}
		if (mas[i] != max && mas[i] != min)
		{
			srednee = srednee + mas[i];
		}
	}

	printf("\n");
	printf("Max = %i\n", max);
	printf("Min = %i\n", min);
	Sleep(2000);

	for (int i = 0; i < 5; i++)
	{
		
		printf("Среднее = %.2f\n\n", srednee);
		Sleep(500);
		system("cls");
		Sleep(500);
	}
	printf("Среднее = %.2f\n\n", srednee);
	
}
