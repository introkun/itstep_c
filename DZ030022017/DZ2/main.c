#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#include "biki.h"

/*Задание 2
Написать игру «Быки и коровы».Программа "загадывает" четырёхзначное число и
играющий должен угадать его.После ввода пользователем числа программа сообщает,
сколько цифр числа угадано(быки) и сколько цифр угадано и стоит на нужном месте
(коровы).После отгадывания числа на экран необходимо вывести количество сделанных
пользователем попыток.В программе необходимо использовать рекурсию.*/

int getNumberFromUser();

int main()
{
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	int const secret = 1000 + rand() % 9000;
	int const secret1 = secret / 1000;
	int const secret2 = secret / 100 % 10;
	int const secret3 = secret / 10 % 10;
	int const secret4 = secret % 10;

	int number = getNumberFromUser();

	int number1 = number / 1000;
	int number2 = number / 100 % 10;
	int number3 = number / 10 % 10;
	int number4 = number % 10;

	compareNumbers(secret1, secret2, secret3, secret4,
		number1, number2, number3, number4);
		
	return 0;
}

int getNumberFromUser()
{
	printf("Введите четырёхзначное число: \n");
	int number;
	scanf("%i", &number);

	if (number < 1000 || number > 10000)
	{
		printf("Вы ввели не четырёхзначное число!\n");
		chislo();		//рекурсия
	}

	return number;
}
