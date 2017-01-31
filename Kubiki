#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

void animaciaKubika();
void count1();
void count2();
void count3();
void count4();
void count5();
void count6();
void pervayaKombinaciya();       void odinadcatoyaKombinaciya();      void dvadcatpervayaKombinaciya();
void vtorayaKombinaciya();       void dvenadcatayaKombinaciya();      void dvadcatvtorayaKombinaciya();
void tretyaKombinaciya();        void trinadcatayaKombinaciya();      void dvadcattretyayaKombinaciya();
void chetvertayaKombinaciya();   void chetirnadcatayaKombinaciya();   void dvadcatchetvertayaKombinaciya();
void pyatayaKombinaciya();       void petnadcatayaKombinaciya();      void dvadcatpyatayaKombinaciya();
void shestayaKombinaciya();      void shestnadcatayaKombinaciya();    void dvadcatshestayaKombinaciya();
void sedmayaKombinaciya();       void semnadcatayaKombinaciya();      void dvadcatsedmayaKombinaciya();
void vosmayaKombinaciya();       void vosemnadcatayaKombinaciya();    void dvadcatvosmayaKombinaciya();
void devyatayaKombinaciya();     void devyatnadcatayaKombinaciya();   void dvadcatdevyatayaKombinaciya();
void desyatayaKombinaciya();     void dvadcatayaKombinaciya();        void tridcatayaKombinaciya();
void tridcatpervayaKombinaciya();
void tridcatvtorayaKombinaciya();
void tridcattretyaKombinaciya();
void tridcatchetvertayaKombinaciya();
void tridcatpyatayaKombinaciya();
void tridcatshestayaKombinaciya();
char polosa = 219;
int perviiBrosokPolzovotelia1Kubik = 0;
int perviiBrosokPolzovotelia2Kubik = 0;
int vtoroiBrosokPolzovotelia1Kubik = 0;
int vtoroiBrosokPolzovotelia2Kubik = 0;
int tretiiBrosokPolzovotelia1Kubik = 0;
int tretiiBrosokPolzovotelia2Kubik = 0;
int perviiBrosokComputera1Kubik = 0;
int perviiBrosokComputera2Kubik = 0;
int vtoroiBrosokComputera1Kubik = 0;
int vtoroiBrosokComputera2Kubik = 0;
int tretiiBrosokComputera1Kubik = 0;
int tretiiBrosokComputera2Kubik = 0;
int perviiBrosokComputera = 0;
int vtoroiBrosokComputera = 0;
int tretiiBrosokComputera = 0;
int perviiBrosokPolzovotelia = 0;   
int vtoroiBrosokPolzovotelia = 0;
int tretiiBrosokPolzovotelia = 0;


int main()
{
	//setlocale(LC_ALL, "Rus");

	
	printf("\n\n\n\n\n\n");

	for (int i = 0; i < 60; i++)
	{
		printf("%c", polosa);
		Sleep(100);
	}
	system("cls");
	
    srand(time(NULL));
	/*
	Задание 2
	Написать игру «Кубики». Пользователь и компьютер по очереди бросают 2 кубика.
	Победитель – тот, у кого по результатам 3х бросков сумма больше. Предусмотреть
	красивый интерфейс игры.
	*/	
	int polzovatel = 0;
	int computer = 0;
	int newGame = 0;
	
	system("pause");	
		perviiBrosokPolzovotelia1Kubik = 1 + rand() % 6;
		perviiBrosokPolzovotelia2Kubik = 1 + rand() % 6;
		perviiBrosokPolzovotelia = perviiBrosokPolzovotelia1Kubik + perviiBrosokPolzovotelia2Kubik;
		if (perviiBrosokPolzovotelia1Kubik == 1&& perviiBrosokPolzovotelia2Kubik==1)
		{
			animaciaKubika();			
			pervayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 1 && perviiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			vtorayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 1 && perviiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			tretyaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 1 && perviiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			chetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 1 && perviiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			pyatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 1 && perviiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			shestayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 2 && perviiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			sedmayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 2 && perviiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			vosmayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 2 && perviiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			devyatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 2 && perviiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			desyatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 2 && perviiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			odinadcatoyaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 2 && perviiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			dvenadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 3 && perviiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			trinadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 3 && perviiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			chetirnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 3 && perviiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			petnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 3 && perviiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			shestnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 3 && perviiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			semnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 3 && perviiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			vosemnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 4 && perviiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			devyatnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 4 && perviiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			dvadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 4 && perviiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			dvadcatpervayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 4 && perviiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvtorayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 4 && perviiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			dvadcattretyayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 4 && perviiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			dvadcatchetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 5 && perviiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			dvadcatpyatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 5 && perviiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			dvadcatshestayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 5 && perviiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			dvadcatsedmayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 5 && perviiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvosmayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 5 && perviiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			dvadcatdevyatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 5 && perviiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			tridcatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 6 && perviiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			tridcatpervayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 6 && perviiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			tridcatvtorayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 6 && perviiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			tridcattretyaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 6 && perviiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			tridcatchetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 6 && perviiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			tridcatpyatayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
		if (perviiBrosokPolzovotelia1Kubik == 6 && perviiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			tridcatshestayaKombinaciya();
			printf("U Vas vipalo %i\n", perviiBrosokPolzovotelia);
		}
				
		
		Sleep(3000);
		system("cls");
		printf("Pervay popitka polzovatelya = %i\n", perviiBrosokPolzovotelia);
		Sleep(1000);
		printf("Seichas hodit computer\n");
		Sleep(3000);
				
		perviiBrosokComputera1Kubik = 1 + rand() % 6;
		perviiBrosokComputera2Kubik = 1 + rand() % 6;
		perviiBrosokComputera = perviiBrosokComputera1Kubik + perviiBrosokComputera2Kubik;
		if (perviiBrosokComputera1Kubik == 1 && perviiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			pervayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 1 && perviiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			vtorayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 1 && perviiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			tretyaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 1 && perviiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			chetvertayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 1 && perviiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			pyatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 1 && perviiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			shestayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 2 && perviiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			sedmayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 2 && perviiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			vosmayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 2 && perviiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			devyatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 2 && perviiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			desyatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 2 && perviiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			odinadcatoyaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 2 && perviiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			dvenadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 3 && perviiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			trinadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 3 && perviiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			chetirnadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 3 && perviiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			petnadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 3 && perviiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			shestnadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 3 && perviiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			semnadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 3 && perviiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			vosemnadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 4 && perviiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			devyatnadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 4 && perviiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			dvadcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 4 && perviiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			dvadcatpervayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 4 && perviiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvtorayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 4 && perviiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			dvadcattretyayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 4 && perviiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			dvadcatchetvertayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 5 && perviiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			dvadcatpyatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 5 && perviiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			dvadcatshestayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 5 && perviiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			dvadcatsedmayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 5 && perviiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvosmayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 5 && perviiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			dvadcatdevyatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 5 && perviiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			tridcatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 6 && perviiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			tridcatpervayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 6 && perviiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			tridcatvtorayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 6 && perviiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			tridcattretyaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 6 && perviiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			tridcatchetvertayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 6 && perviiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			tridcatpyatayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		if (perviiBrosokComputera1Kubik == 6 && perviiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			tridcatshestayaKombinaciya();
			printf("Shet computera %i\n", perviiBrosokComputera);
		}
		Sleep(3000);
		system("cls");
		printf("Pervay popitka polzovatelya = %i\n", perviiBrosokPolzovotelia);
		printf("Pervaya popitka computera = %i\n", perviiBrosokComputera);
		Sleep(1000);
		printf("Vas hod\n");
		Sleep(1000);

		system("cls");
		system("pause");
		vtoroiBrosokPolzovotelia1Kubik = 1 + rand() % 6;
		vtoroiBrosokPolzovotelia2Kubik = 1 + rand() % 6;
		vtoroiBrosokPolzovotelia = vtoroiBrosokPolzovotelia1Kubik  + vtoroiBrosokPolzovotelia2Kubik;
		if (vtoroiBrosokPolzovotelia1Kubik == 1 && vtoroiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			pervayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 1 && vtoroiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			vtorayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 1 && vtoroiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			tretyaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 1 && vtoroiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			chetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 1 && vtoroiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			pyatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 1 && vtoroiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			shestayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 2 && vtoroiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			sedmayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 2 && vtoroiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			vosmayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 2 && vtoroiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			devyatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 2 && vtoroiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			desyatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 2 && vtoroiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			odinadcatoyaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 2 && vtoroiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			dvenadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 3 && vtoroiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			trinadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 3 && vtoroiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			chetirnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 3 && vtoroiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			petnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 3 && vtoroiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			shestnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 3 && vtoroiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			semnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 3 && vtoroiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			vosemnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 4 && vtoroiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			devyatnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 4 && vtoroiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			dvadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 4 && vtoroiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			dvadcatpervayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 4 && vtoroiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvtorayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 4 && vtoroiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			dvadcattretyayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 4 && vtoroiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			dvadcatchetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 5 && vtoroiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			dvadcatpyatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 5 && vtoroiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			dvadcatshestayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 5 && vtoroiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			dvadcatsedmayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 5 && vtoroiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvosmayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 5 && vtoroiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			dvadcatdevyatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 5 && vtoroiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			tridcatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 6 && vtoroiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			tridcatpervayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 6 && vtoroiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			tridcatvtorayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 6 && vtoroiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			tridcattretyaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 6 && vtoroiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			tridcatchetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 6 && vtoroiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			tridcatpyatayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		if (vtoroiBrosokPolzovotelia1Kubik == 6 && vtoroiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			tridcatshestayaKombinaciya();
			printf("U Vas vipalo %i\n", vtoroiBrosokPolzovotelia);
		}
		Sleep(3000);
		system("cls");
		printf("Pervay popitka polzovatelya = %i\n", perviiBrosokPolzovotelia);
		Sleep(1000);
		printf("Vtoraya popitka polzovotelya =%i\n", vtoroiBrosokPolzovotelia);
		Sleep(1000);
		printf("Seichas hodit computer\n");
		Sleep(1000);

		vtoroiBrosokComputera1Kubik = 1 + rand() % 6;
		vtoroiBrosokComputera2Kubik = 1 + rand() % 6;
		vtoroiBrosokComputera = vtoroiBrosokComputera1Kubik + vtoroiBrosokComputera2Kubik;
		if (vtoroiBrosokComputera1Kubik == 1 && vtoroiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			pervayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 1 && vtoroiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			vtorayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 1 && vtoroiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			tretyaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 1 && vtoroiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			chetvertayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 1 && vtoroiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			pyatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 1 && vtoroiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			shestayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 2 && vtoroiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			sedmayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 2 && vtoroiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			vosmayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 2 && vtoroiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			devyatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 2 && vtoroiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			desyatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 2 && vtoroiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			odinadcatoyaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 2 && vtoroiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			dvenadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 3 && vtoroiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			trinadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 3 && vtoroiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			chetirnadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 3 && vtoroiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			petnadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 3 && vtoroiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			shestnadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 3 && vtoroiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			semnadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 3 && vtoroiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			vosemnadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 4 && vtoroiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			devyatnadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 4 && vtoroiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			dvadcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 4 && vtoroiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			dvadcatpervayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 4 && vtoroiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvtorayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 4 && vtoroiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			dvadcattretyayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 4 && vtoroiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			dvadcatchetvertayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 5 && vtoroiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			dvadcatpyatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 5 && vtoroiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			dvadcatshestayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 5 && vtoroiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			dvadcatsedmayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 5 && vtoroiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvosmayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 5 && vtoroiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			dvadcatdevyatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 5 && vtoroiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			tridcatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 6 && vtoroiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			tridcatpervayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 6 && vtoroiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			tridcatvtorayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 6 && vtoroiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			tridcattretyaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 6 && vtoroiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			tridcatchetvertayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 6 && vtoroiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			tridcatpyatayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		if (vtoroiBrosokComputera1Kubik == 6 && vtoroiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			tridcatshestayaKombinaciya();
			printf("Shet computera %i\n", vtoroiBrosokComputera);
		}
		Sleep(3000);
		system("cls");
		printf("Pervay popitka polzovatelya = %i\n", perviiBrosokPolzovotelia);
		printf("Vtoraya popitka polzovotelya =%i\n", vtoroiBrosokPolzovotelia);
		Sleep(1000);
		printf("Pervaya popitka computera = %i\n", perviiBrosokComputera);
		printf("Vtoraya popitka computera = %i\n", vtoroiBrosokComputera);
		Sleep(3000);
		printf("Vas hod\n");
		Sleep(3000);



		system("cls");
		system("pause");
		tretiiBrosokPolzovotelia1Kubik = 1 + rand() % 6;
		tretiiBrosokPolzovotelia2Kubik = 1 + rand() % 6;
		tretiiBrosokPolzovotelia = tretiiBrosokPolzovotelia1Kubik + tretiiBrosokPolzovotelia2Kubik;
		if (tretiiBrosokPolzovotelia1Kubik == 1 && tretiiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			pervayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 1 && tretiiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			vtorayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 1 && tretiiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			tretyaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 1 && tretiiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			chetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 1 && tretiiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			pyatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 1 && tretiiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			shestayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 2 && tretiiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			sedmayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 2 && tretiiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			vosmayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 2 && tretiiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			devyatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 2 && tretiiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			desyatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 2 && tretiiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			odinadcatoyaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 2 && tretiiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			dvenadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 3 && tretiiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			trinadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 3 && tretiiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			chetirnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 3 && tretiiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			petnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 3 && tretiiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			shestnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 3 && tretiiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			semnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 3 && tretiiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			vosemnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 4 && tretiiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			devyatnadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 4 && tretiiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			dvadcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 4 && tretiiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			dvadcatpervayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 4 && tretiiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvtorayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 4 && tretiiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			dvadcattretyayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 4 && tretiiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			dvadcatchetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 5 && tretiiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			dvadcatpyatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 5 && tretiiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			dvadcatshestayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 5 && tretiiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			dvadcatsedmayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 5 && tretiiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvosmayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 5 && tretiiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			dvadcatdevyatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 5 && tretiiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			tridcatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 6 && tretiiBrosokPolzovotelia2Kubik == 1)
		{
			animaciaKubika();
			tridcatpervayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 6 && tretiiBrosokPolzovotelia2Kubik == 2)
		{
			animaciaKubika();
			tridcatvtorayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 6 && tretiiBrosokPolzovotelia2Kubik == 3)
		{
			animaciaKubika();
			tridcattretyaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 6 && tretiiBrosokPolzovotelia2Kubik == 4)
		{
			animaciaKubika();
			tridcatchetvertayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 6 && tretiiBrosokPolzovotelia2Kubik == 5)
		{
			animaciaKubika();
			tridcatpyatayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		if (tretiiBrosokPolzovotelia1Kubik == 6 && tretiiBrosokPolzovotelia2Kubik == 6)
		{
			animaciaKubika();
			tridcatshestayaKombinaciya();
			printf("U Vas vipalo %i\n", tretiiBrosokPolzovotelia);
		}
		Sleep(3000);
		system("cls");
		printf("Pervay popitka polzovatelya = %i\n", perviiBrosokPolzovotelia);
		Sleep(1000);
		printf("Vtoraya popitka polzovotelya =%i\n", vtoroiBrosokPolzovotelia);
		Sleep(1000);
		printf("Tretya popitka polzovatelya =%i\n", tretiiBrosokPolzovotelia);
		Sleep(1000);
		printf("Seichas hodit computer\n");
		Sleep(1000);

		tretiiBrosokComputera1Kubik = 1 + rand() % 6;
		tretiiBrosokComputera2Kubik = 1 + rand() % 6;
		tretiiBrosokComputera = tretiiBrosokComputera1Kubik + tretiiBrosokComputera2Kubik;
		if (tretiiBrosokComputera1Kubik == 1 && tretiiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			pervayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 1 && tretiiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			vtorayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 1 && tretiiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			tretyaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 1 && tretiiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			chetvertayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 1 && tretiiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			pyatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 1 && tretiiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			shestayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 2 && tretiiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			sedmayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 2 && tretiiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			vosmayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 2 && tretiiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			devyatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 2 && tretiiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			desyatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 2 && tretiiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			odinadcatoyaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 2 && tretiiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			dvenadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 3 && tretiiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			trinadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 3 && tretiiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			chetirnadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 3 && tretiiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			petnadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 3 && tretiiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			shestnadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 3 && tretiiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			semnadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 3 && tretiiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			vosemnadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 4 && tretiiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			devyatnadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 4 && tretiiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			dvadcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 4 && tretiiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			dvadcatpervayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 4 && tretiiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvtorayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 4 && tretiiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			dvadcattretyayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 4 && tretiiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			dvadcatchetvertayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 5 && tretiiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			dvadcatpyatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 5 && tretiiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			dvadcatshestayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 5 && tretiiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			dvadcatsedmayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 5 && tretiiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			dvadcatvosmayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 5 && tretiiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			dvadcatdevyatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 5 && tretiiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			tridcatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 6 && tretiiBrosokComputera2Kubik == 1)
		{
			animaciaKubika();
			tridcatpervayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 6 && tretiiBrosokComputera2Kubik == 2)
		{
			animaciaKubika();
			tridcatvtorayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 6 && tretiiBrosokComputera2Kubik == 3)
		{
			animaciaKubika();
			tridcattretyaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 6 && tretiiBrosokComputera2Kubik == 4)
		{
			animaciaKubika();
			tridcatchetvertayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 6 && tretiiBrosokComputera2Kubik == 5)
		{
			animaciaKubika();
			tridcatpyatayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		if (tretiiBrosokComputera1Kubik == 6 && tretiiBrosokComputera2Kubik == 6)
		{
			animaciaKubika();
			tridcatshestayaKombinaciya();
			printf("Shet computera %i\n", tretiiBrosokComputera);
		}
		Sleep(3000);
		system("cls");
		printf("Pervay popitka polzovatelya = %i\n", perviiBrosokPolzovotelia);
		printf("Vtoraya popitka polzovotelya =%i\n", vtoroiBrosokPolzovotelia);
		printf("Tretya popitka polzovatelya =%i\n", tretiiBrosokPolzovotelia);
		Sleep(1000);
		printf("Pervaya popitka computera = %i\n", perviiBrosokComputera);
		printf("Vtoraya popitka computera = %i\n", vtoroiBrosokComputera);
		printf("Tretya popitka computera = %i\n", tretiiBrosokComputera);
		Sleep(3000);
		system("cls");
		polzovatel = perviiBrosokPolzovotelia1Kubik + vtoroiBrosokPolzovotelia + tretiiBrosokPolzovotelia;
		computer = perviiBrosokComputera + vtoroiBrosokComputera + tretiiBrosokComputera;
		printf("Summa ochkov polzovatelya = %i\n", polzovatel);
		printf("Summa ochkov computera = %i\n", computer);
		Sleep(3000);
		system("cls");
		if (polzovatel > computer)
		{
			printf("Ura vi pobedili\n");
		}
		else if (polzovatel < computer)
		{
			printf("Pobedil computer\n");
		}
		else
		{
			printf("Nichiya\n");
		}
	
	return 0;
}


void animaciaKubika()
{
	for (int i = 0; i < 3; i++)
	{
		printf("\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, 
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c\n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c\n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c\n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c\n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c\n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c\n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c\n", polosa, polosa, polosa, polosa);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		Sleep(100);
		system("cls");
		printf("\n\n");
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		Sleep(100);
		system("cls");
		printf("\n\n\n");
		printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("  %c%c          %c%c\n", polosa, polosa, polosa, polosa);
		printf("  %c%c          %c%c\n", polosa, polosa, polosa, polosa);
		printf("  %c%c          %c%c\n", polosa, polosa, polosa, polosa);
		printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		Sleep(100);
		system("cls"); 

		printf("\n\n\n\n");
		printf("   %c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa);
		printf("   %c%c        %c%c\n", polosa, polosa, polosa, polosa);
		printf("   %c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa);
		Sleep(100);
		system("cls");
		printf("\n\n\n\n\n");
		printf("        %c%c\n", polosa, polosa);
		Sleep(100);
		system("cls");
		printf("\n\n\n\n");
		printf("   %c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa);
		printf("   %c%c        %c%c\n", polosa, polosa, polosa, polosa);
		printf("   %c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa);
		Sleep(100);
		system("cls");
		printf("\n\n\n");
		printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("  %c%c          %c%c\n", polosa, polosa, polosa, polosa);
		printf("  %c%c          %c%c\n", polosa, polosa, polosa, polosa);
		printf("  %c%c          %c%c\n", polosa, polosa, polosa, polosa);
		printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		Sleep(100);
		system("cls");
		printf("\n\n");
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c            %c%c\n", polosa, polosa, polosa, polosa);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		Sleep(100);
		system("cls");
		printf("\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    ",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		Sleep(100);
		system("cls");
	}
}

	void count1()
	{		
		printf("\n\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c      %c%c      %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   ",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
	}

	void count2()
	{
		printf("\n\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c          %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c          %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    ",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
	}

	void count3()
	{
		printf("\n\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c          %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c      %c%c      %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c          %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    ",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
	}

	void count4()
	{
		printf("\n\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c      %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c      %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    ",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
	}

	void count5()
	{
		printf("\n\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c      %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c      %c%c      %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c      %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    ",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
	}

	void count6()
	{
		printf("\n\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c      %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c      %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c  %c%c      %c%c  %c%c    \n", polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
		printf("%c%c              %c%c    \n", polosa, polosa, polosa, polosa);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    ",
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa,
			polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa, polosa);
	}


	void pervayaKombinaciya()
	{
		if (perviiBrosokPolzovotelia1Kubik == 1 && perviiBrosokPolzovotelia1Kubik==1)
		{
			count1();
			count1();
		}
	}


	void vtorayaKombinaciya()
	{
		count1();
		count2();
	}

	void tretyaKombinaciya()
	{
		count1();
		count3();
	}
	void chetvertayaKombinaciya()
	{
		count1();
		count4();
	}
	void pyatayaKombinaciya()
	{
		count1();
		count5();
	}
	void shestayaKombinaciya()
	{
		count1();
		count6();
	}
	void sedmayaKombinaciya()
	{
		count2();
		count1();
	}
	void vosmayaKombinaciya()
	{
		count2();
		count2();
	}
	void devyatayaKombinaciya()
	{
		count2();
		count3();
	}
	void desyatayaKombinaciya()
	{
		count2();
		count4();
	}
	void odinadcatoyaKombinaciya()
	{
		count2();
		count5();
	}
	void dvenadcatayaKombinaciya()
	{
		count2();
		count6();
	}
	void trinadcatayaKombinaciya()
	{
		count3();
		count1();
	}
	void chetirnadcatayaKombinaciya()
	{
		count3();
		count2();
	}
	void petnadcatayaKombinaciya()
	{
		count3();
		count3();
	}
	void shestnadcatayaKombinaciya()
	{
		count3();
		count4();
	}
	void semnadcatayaKombinaciya()
	{
		count3();
		count5();
	}
	void vosemnadcatayaKombinaciya()
	{
		count3();
		count6();
	}
	void devyatnadcatayaKombinaciya()
	{
		count4();
		count1();
	}
	void dvadcatayaKombinaciya()
	{
		count4();
		count2();
	}
	void dvadcatpervayaKombinaciya()
	{
		count4();
		count3();
	}
	void dvadcatvtorayaKombinaciya()
	{
		count4();
		count4();
	}
	void dvadcattretyayaKombinaciya()
	{
		count4();
		count5();
	}
	void dvadcatchetvertayaKombinaciya()
	{
		count4();
		count6();
	}
	void dvadcatpyatayaKombinaciya()
	{
		count5();
		count1();
	}
	void dvadcatshestayaKombinaciya()
	{
		count5();
		count2();
	}
	void dvadcatsedmayaKombinaciya()
	{
		count5();
		count3();
	}
	void dvadcatvosmayaKombinaciya()
	{
		count5();
		count4();
	}
	void dvadcatdevyatayaKombinaciya()
	{
		count5();
		count5();
	}
	void tridcatayaKombinaciya()
	{
		count5();
		count6();
	}
	void tridcatpervayaKombinaciya()
	{
		count6();
		count1();
	}
	void tridcatvtorayaKombinaciya()
	{
		count6();
		count2();
	}
	void tridcattretyaKombinaciya()
	{
		count6();
		count3();
	}
	void tridcatchetvertayaKombinaciya()
	{
		count6();
		count4();
	}
	void tridcatpyatayaKombinaciya()
	{
		count6();
		count5();
	}
	void tridcatshestayaKombinaciya()
	{
		count6();
		count6();
	}
