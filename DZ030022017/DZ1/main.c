#include <stdio.h>
#include <locale.h>

/*
�������� ����������� ������� ���������� 
����������� ������ �������� ���� �����
�����.
*/
int obDel(int pervoeChislo, int vtoroeChislo);

int main()
{
	setlocale(LC_ALL, "rus");
	int pervoeChislo = 0;
	int vtoroeChislo = 0;
	printf("������� ������ �����: \n");
	scanf("%i", &pervoeChislo);
	printf("������� ������ �����: \n");
	scanf("%i", &vtoroeChislo);
	printf("���������� ����� �������� ���� �����: %i\n", obDel(pervoeChislo, vtoroeChislo));
	
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