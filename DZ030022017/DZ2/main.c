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

int bikiKorovi(int secret1, int secret2, int secret3, int secret4,
	int chisloPolsovatelya1, int chisloPolsovatelya2, int chisloPolsovatelya3, int chisloPolsovatelya4);

int chislo();
int chisloPolsovatelya;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int secret = 1000+rand() % 9000;
	int secret1 = secret / 1000;
	int secret2 = secret / 100 % 10;
	int secret3 = secret / 10 % 10;
	int secret4 = secret % 10;

	chisloPolsovatelya = chislo();
	
	
	/*if (chisloPolsovatelya < 1000 || chisloPolsovatelya > 10000)
	{
		printf("Вы ввели не четырёхзначное число!\n");
		chislo();
		return 0;
	}*/

	int chisloPolsovatelya1 = chisloPolsovatelya / 1000;
	int chisloPolsovatelya2 = chisloPolsovatelya / 100 % 10;
	int chisloPolsovatelya3 = chisloPolsovatelya / 10 % 10;
	int chisloPolsovatelya4 = chisloPolsovatelya % 10;

	bikiKorovi(secret1, secret2, secret3, secret4,
		chisloPolsovatelya1, chisloPolsovatelya2, chisloPolsovatelya3, chisloPolsovatelya4);
		
	return 0;
}

int chislo()
{
	printf("Введите четырёхзначное число: \n");
	scanf("%i", &chisloPolsovatelya);

	if (chisloPolsovatelya < 1000 || chisloPolsovatelya > 10000)
	{
		printf("Вы ввели не четырёхзначное число!\n");
		chislo();		//рекурсия
	}

	return chisloPolsovatelya;
}
