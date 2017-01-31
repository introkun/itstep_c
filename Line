#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

enum LineNapravlenie
{
	Vertikal = 1,
	Horizontal
};

enum Speed
{
	Medlenno = 1,
	Normal,
	Bistro
};

enum Simvol
{
	Zvezdochka = 1,
	Tire
};

int main()
{
	setlocale(LC_ALL, "Rus");
	/*
	Задание 1
Написать программу, которая выводит на экран линию заданным символом,
вертикальную или горизонтальную, причем линия может выводиться быстро, нормально и
медленно. Общение с пользователем организовать через меню.
*/
	enum LineNapravlenie lineNapravlenie;
	enum Speed speed;
	enum Simvol simvol;
	int line = 0;
	char znak;
	int dlina = 0;
	printf("Введите длину линии\n");
	scanf("%i", &dlina);
	printf("Выберите символ отрисовки линии: \n1 - Звёздочка\n2 - Тире\n");
	scanf("%i", &simvol);
	switch (simvol)
	{
	case Zvezdochka:
		znak = '*';
		break;
	case Tire:
		znak = '-';
		break;
	default:
		break;
	}
	printf("Выберите направление линии: \n1 - Вертикальная\n2 - Горизонтальная\n");
	scanf("%i", &lineNapravlenie);
	switch (lineNapravlenie)
	{
	case Vertikal:
		printf("Выберите скорость отрисовки линии: \n1 - Медленно\n2 - Нормально\n3 - Быстро\n");
		scanf("%i", &speed);
		switch (speed)
		{
		case Medlenno:
			for (int i = 0; i <= dlina; i++)
			{
				printf("%c\n", znak);
				Sleep(1000);
			}
			printf("\n");
			return 0;
			break;
		case Normal:
			for (int i = 0; i <= dlina; i++)
			{
				printf("%c\n", znak);
				Sleep(500);
			}
			printf("\n");
			return 0;
			break;
		case Bistro:
			for (int i = 0; i <= dlina; i++)
			{
				printf("%c\n", znak);
				Sleep(100);
			}
			printf("\n");
			return 0;
			break;
		default:
			break;
		}
		break;
	case Horizontal:
		printf("Выберите скорость отрисовки линии: \n1 - Медленно\n2 - Нормально\n3 - Быстро\n");
		scanf("%i", &speed);
		switch (speed)
		{
		case Medlenno:
			for (int i = 0; i <= dlina; i++)
			{
				printf("%c", znak);
				Sleep(1000);
			}
			printf("\n");
			return 0;
			break;
		case Normal:
			for (int i = 0; i <= dlina; i++)
			{
				printf("%c", znak);
				Sleep(500);
			}
			printf("\n");
			return 0;
			break;
		case Bistro:
			for (int i = 0; i <= dlina; i++)
			{
				printf("%c", znak);
				Sleep(100);
			}
			printf("\n");
			return 0;
			break;
		default:
			break;
		}
		break;
	}
	


	return 0;
}
