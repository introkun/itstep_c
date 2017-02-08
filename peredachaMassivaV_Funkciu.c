#include <stdio.h>
#include <locale.h>
#include <Windows.h>

//Передача массива в функцию
void printArray(int mas[], int count);

int main()
{
	setlocale(LC_ALL, "rus");
	int mas[] = { 123, 234, 345, 456, 123, 234, 345, 456, 123, 234, 345, 456, 123, 234, 345, 456 };
	int const massCount = sizeof(mas) / sizeof(int);
	
	printArray(mas, massCount);
	return 0;
}

void printArray(int mas[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%i\n", mas[i]);
		Sleep(500);
	}
}
