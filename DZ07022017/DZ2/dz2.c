#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define MONTH 12

/*
Задание 2: Пользователь вводит прибыль фирмы за год (12 месяцев). Затем пользователь
вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем). Необходимо
определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль
была минимальна с учетом выбранного диапазона.
*/

int main()
{
	setlocale(LC_ALL, "rus");
	float mass[MONTH];	
	float max;
	float min;
	int firstNumberRange = 0;
	int secondNumberRange = 0;

	for (int i = 0; i < MONTH; i++)
	{
		printf("Введите прибыль фирмы за %i месяц в формате 00,00\n", i + 1);
		scanf("%f", &mass[i]);
		for (int j = 0; j < 50; j++)
		{
			Sleep(1);
			printf("-");
		}
		printf("\n");
	}

	system("cls");
	printf("Введите номер месяца с которого вы хотите получить отчёт\n");
	scanf("%i", &firstNumberRange);
	firstNumberRange = firstNumberRange - 1;
	printf("Введите номер месяца по который вы хотите получить отчёт\n");
	scanf("%i", &secondNumberRange);

	system("cls");
	for (int i = firstNumberRange; i < secondNumberRange; i++)
	{
		printf("Прибыль за %i месяц \t %.2f р.\n", i+1, mass[i]);
		if (i == firstNumberRange)
		{
			max = mass[i];
			min = mass[i];
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

	Sleep(3000);
	
	printf("\nМаксимальная прибыль \t %.2f р.\n"
		"Минимальная прибыль \t %.2f р.\n", max, min);

	return 0;
}
