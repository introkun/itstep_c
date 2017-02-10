#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define YEARS_COUNT 10

int main()
{
	setlocale(LC_ALL, "rus");
	float srednee = 0;
	
	float temper[YEARS_COUNT];
	float max ;
	float min ;

	for (int i = 0; i < YEARS_COUNT; i++)
	{
		printf("Введите %i значение: \n", i + 1);
		scanf("%f", &temper[i]);		
	
	}

	for (int i = 0; i < YEARS_COUNT; i++)
	{		
			srednee = srednee + temper[i];
			if (i == 0)
			{
				 max = temper[0];
				 min = temper[0];
			}
			if (max < temper[i])
			{
				max = temper[i];
			}
			if (min > temper[i])
				min = temper[i];

	}
	
	printf("Среднее значение = %.2f \n", srednee / YEARS_COUNT);
	printf("Максимальное значение = %.2f \n", max);
	printf("Минимальное значение = %.2f \n", min);
	return 0;
}
