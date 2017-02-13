#include <stdio.h>
#include <locale.h>

#define DLINA_MASSIVA 10

void bubleSortAsc(int array[], int dlinaMassiva);
void bubleSortDesc(int array[], int dlinaMassiva);
void insertSortAsc(int array[], int dlinaMassiva);
void insertSortDesc(int array[], int dlinaMassiva);
void vivodMassiva(int array[], int dlinaMassiva);

enum ViborSortirovki
{
	BubleAscSort = 1,
	BubleDescSort,
	InsertAscSort,
	InsertDesSort,
};


int main()
{
	setlocale(LC_ALL, "rus");	
	enum ViborSortirovki viborsortirovki;
	
	int dlinaMassiva = DLINA_MASSIVA;
	int array[DLINA_MASSIVA];
	for (int i = 0; i < DLINA_MASSIVA; i++)
	{
		printf("Введите %i значение\n", i+1);
		scanf_s("%i", &array[i]);
	}

	vivodMassiva(array, dlinaMassiva);

	printf("Выберите способ сортровки: \n");
	printf("1 = Сортировка пузырьком с лева на право\n");
	printf("2 = Сортировка пузырьком с право на лево\n");
	printf("3 = Сортировка вставками с лева на право\n");
	printf("4 = Сортировка вставками с право на лево\n");
	scanf("%i", &viborsortirovki);
	switch (viborsortirovki)
	{
	case BubleAscSort:
		bubleSortAsc(array, dlinaMassiva);
		vivodMassiva(array, dlinaMassiva);
		break;
	case BubleDescSort:
		bubleSortDesc(array, dlinaMassiva);
		vivodMassiva(array, dlinaMassiva);

		break;
	case InsertAscSort:
		insertSortAsc(array, dlinaMassiva);
		vivodMassiva(array, dlinaMassiva);
		break;
	case InsertDesSort:
		insertSortDesc(array, dlinaMassiva);
		vivodMassiva(array, dlinaMassiva);
		break;
	default:
		break;
	}

	return 0;
}


void bubleSortAsc(int array[], int dlinaMassiva)
{
	for (int i = 0; i < dlinaMassiva - 1; i++)
	{
		for (int j = 0; j < dlinaMassiva - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}


void bubleSortDesc(int array[], int dlinaMassiva)
{
	for (int i = dlinaMassiva; i > 0; i--)
	{
		for (int j = dlinaMassiva; j < 0; j--)
		{
			if (array[j] < array[j - 1])
			{
				int tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
			}
		}
	}
}


void insertSortAsc(int array[], int dlinaMassiva)
{
	for (int i = 0; i < dlinaMassiva; i++)
	{
		int x = array[i];
		int j = i;
		while (j > 0 && array[j - 1] > x)
		{
			array[j] = array[j - 1];
			j = j - 1;
		}
		array[j] = x;
	}
}


void insertSortDesc(int array[], int dlinaMassiva)
{
	for (int i = dlinaMassiva; i < 0; i--)
	{
		int x = array[i];
		int j = i;
		while (j < 0 && array[j + 1] < x)
		{
			array[j] = array[j + 1];
			j = j - 1;
		}
		array[j] = x;
	}
}



void vivodMassiva(int array[], int dlinaMassiva)
{

	for (int i = 0; i < dlinaMassiva; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("\n");
}
