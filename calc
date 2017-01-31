#include <stdio.h>
#include <locale.h>


int plus(int a, int b);
int minus(int a, int b);
int delenie(int a, int b);
int umnogenie(int a, int b);

enum Deistvie
{
	Slogenie = '+',
	Vichitanie = '-',
	Delenie = '/',
	Umnogenie = '*'
};

int main()
{
	/*
	Задание 1
	Написать программу-калькулятор. Реализовать 4 основные арифметические действия над
	2-мя целочисленными значениями, получаемыми от пользователя. Арифметическое
	действие задается путем введения с клавиатуры символов ‘+’, ‘-’, '/', '*'.
	*/
	setlocale(LC_ALL, "Rus");

	enum Deistvie deistvie;
	int firstNumber = 0;
	int secondNumber = 0;
	printf("Введите первое число\n");
	scanf("%i", &firstNumber);
	printf("Введите второе число\n");
	scanf("%i", &secondNumber);
	getchar();

	printf("Введите действие которое необходимо произвести\n+ сложение\n- вычитание\n/ деление\n* умножение\n");
	deistvie = getchar();

	switch (deistvie)
	{
	case Slogenie:
		printf("%i + %i = %i\n", firstNumber, secondNumber, plus(firstNumber, secondNumber));
		break;
	case Vichitanie:
		printf("%i - %i = %i\n", firstNumber, secondNumber, minus(firstNumber, secondNumber));
		break;
	case Delenie:
		printf("%i / %i = %i\n", firstNumber, secondNumber, delenie(firstNumber, secondNumber));
		break;
	case Umnogenie:
		printf("%i * %i = %i\n", firstNumber, secondNumber, umnogenie(firstNumber, secondNumber));
		break;
	default:
		printf("Введите правильный символ\n");
		break;
	}

	return 0;
}

int plus(int a, int b)
{

	return a + b;

}

int minus(int a, int b)
{

	return a - b;

}

int umnogenie(int a, int b)
{

	return a * b;

}

int delenie(int a, int b)
{

	return a / b;

}
