#include <stdio.h>
#include <locale.h>

/*
Íàïèñàòü ðåêóðñèâíóþ ôóíêöèþ íàõîæäåíèÿ 
íàèáîëüøåãî îáùåãî äåëèòåëÿ äâóõ öåëûõ
÷èñåë.
*/
int obDel(int pervoeChislo, int vtoroeChislo);

int main()
{
	setlocale(LC_ALL, "rus");
	int pervoeChislo = 0;
	int vtoroeChislo = 0;
	printf("Ââåäèòå ïåðâîå ÷èñëî: \n");
	scanf("%i", &pervoeChislo);
	printf("Ââåäèòå âòîðîå ÷èñëî: \n");
	scanf("%i", &vtoroeChislo);
	printf("Íàèáîëüøèé îáùèé äåëèòåëü äâóõ ÷èñåë: %i\n", obDel(pervoeChislo, vtoroeChislo));
	
	return 0;
}


int obDel(int pervoeChislo, int vtoroeChislo)
{
	if (vtoroeChislo == 0)
	{
		return pervoeChislo;
	}
	if (pervoeChislo > vtoroeChislo)
	{
		return obDel(vtoroeChislo, pervoeChislo % vtoroeChislo);
	}
	else
	{
		return obDel(pervoeChislo, vtoroeChislo % pervoeChislo);
	}
}
