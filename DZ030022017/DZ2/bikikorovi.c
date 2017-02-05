#include "biki.h"

int biki = 0;
int korovi = 0;
extern int secret;
extern int secret1;
extern int secret2;
extern int secret3;
extern int secret4;
extern int chisloPolsovatelya;
extern int chisloPolsovatelya1;
extern int chisloPolsovatelya2;
extern int chisloPolsovatelya3;
extern int chisloPolsovatelya4;

int bikiKorovi(int secret1, int secret2, int secret3, int secret4,
	int chisloPolsovatelya1, int chisloPolsovatelya2, int chisloPolsovatelya3, int chisloPolsovatelya4)
{
	if (chisloPolsovatelya1 == secret1 || chisloPolsovatelya1 == secret2 ||
		chisloPolsovatelya1 == secret3 || chisloPolsovatelya1 == secret4)
	{
		biki++;
	}
	if (chisloPolsovatelya2 == secret1 || chisloPolsovatelya2 == secret2 ||
		chisloPolsovatelya2 == secret3 || chisloPolsovatelya2 == secret4)
	{
		biki++;
	}
	if (chisloPolsovatelya3 == secret1 || chisloPolsovatelya3 == secret2 ||
		chisloPolsovatelya3 == secret3 || chisloPolsovatelya3 == secret4)
	{
		biki++;
	}
	if (chisloPolsovatelya4 == secret1 || chisloPolsovatelya4 == secret2 ||
		chisloPolsovatelya4 == secret3 || chisloPolsovatelya4 == secret4)
	{
		biki++;
	}
	printf("%i быков \n", biki); 

	if (chisloPolsovatelya1 == secret1 )
	{
		korovi++;
	}
	if (chisloPolsovatelya2 == secret2 )
	{
		korovi++;
	}
	if (chisloPolsovatelya3 == secret3)
	{
		korovi++;
	}
	if (chisloPolsovatelya4 == secret4)
	{
		korovi++;
	}
	
	printf("%i коров \n", korovi);
		
	return 0;
}
