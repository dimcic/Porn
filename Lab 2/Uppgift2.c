#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  

int main()
{
	srand((int)time(NULL));

	int summa = 0;
	int antalTal = 0;

	printf("Ange antal tal:");
	scanf_s("%i", &antalTal);

	for (int i = 0; i < antalTal; i++)
	{
		int random = rand() % 10;
		summa = summa + random;
	}

	printf("Antal summerade tal: %i\n", antalTal);
	printf("Summa: %i\n", summa);

	// Om användaren skriver in 0 så kan vi inte räkna ut medelvärdet.
	if (antalTal > 0)
	{
		printf("Medelvärde: %.1f\n", summa / (float)antalTal);
	}
	else
	{
		printf("Inget medelvärde eftersom att antal tal var 0.");
	}

	system("pause");
	
	return 0;
}