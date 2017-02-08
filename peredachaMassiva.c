#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define COUNT 10

//Передача массива в функцию

void printNonZeroArray(int mas[]);
void drowLine();


int main()
{
	setlocale(LC_ALL, "rus");

	drowLine();
	int mas[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		printf("Введите %i значение\n", i+1);
		scanf("%i", &mas[i]);
	}
	system("cls");
	printNonZeroArray(mas);
	return 0;
}


//Выводит элементы массива
void printNonZeroArray(int mas[])
{
	for (int i = 0; i < COUNT; i++)
	{
		if (mas[i] != 0)
		{
			printf("mas[%i] = %i\n", i, mas[i]);
			Sleep(500);
		}
	}
}


//Рисует линию
void drowLine()
{
	for (int i = 0; i < 50; i++)
	{
		printf("-");
		Sleep(50);
	}
	printf("\n");
	
}
