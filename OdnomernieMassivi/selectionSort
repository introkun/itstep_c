#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

#define DLINA_MASSIVA 10


//Сортировка выбором Selection sort

void vivodMassiva(int array[], int dlinaMassiva);
void sortirovka(int array[], int dlinaMassiva);


int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");	
	enum ViborSortirovki viborsortirovki;
	
	int dlinaMassiva = DLINA_MASSIVA;
	int array[DLINA_MASSIVA];
	for (int i = 0; i < DLINA_MASSIVA; i++)
	{
		array[i] = rand() % 100;
	}

	vivodMassiva(array, dlinaMassiva);
	sortirovka(array, dlinaMassiva);

	return 0;
}



void vivodMassiva(int array[], int dlinaMassiva)
{

	for (int i = 0; i < dlinaMassiva; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("\n");
}



void sortirovka(int array[], int dlinaMassiva)
{
	for (int i = 0; i < dlinaMassiva - 1; i++) {
		
		int min = i;
		
		for (int j = i + 1; j < dlinaMassiva; j++) {
			if (array[j] < array[min]) {
				min = j;
			}
		}
		if (min != array[i])
		{
			int temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}
	vivodMassiva(array, dlinaMassiva);
}
