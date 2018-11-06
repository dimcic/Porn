#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  

int main()
{
	srand((int)time(NULL));
	
	int belopp = 0;
	int summa = 0;
	int antalTal = 0;
	
	printf("Ange belopp:");
	scanf_s("%i", &belopp);
	
	while(summa < belopp)
	{
		int random = rand() % 10;

		// Innan vi adderar summan och det slumpmässiga talet så vill vi se till så att det inte överstiger beloppet.
		if (summa + random >= belopp)
		{
			break;
		}

		summa = summa + random;
		antalTal = antalTal + 1;
	}

	printf("Antal tal: %i\n", antalTal);
	printf("Summa: %i\n", summa);

	// Om användaren skriver in ett belopp som är mindre än det intervall som vi genererar tal för så kan vi ha avbrutit while-loopen innan vi summerat några tal.
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























------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------




#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  


int main()
{
	srand((int)time(NULL));
	system("chcp 1252");
	system("cls");
	
	int antalTal = 0;
	int antalLoops = 0;
	int summa = 0;
	int belopp = 0;
	int medelvarde = 0;
	antalTal = rand() % 10;


	printf("Ange beloppet vilket summan skall understiga: \n");
	scanf_s("%d", &belopp);

	while (summa < belopp)
	{
		int random = rand() % belopp;

		
		//* Innan vi adderar summan och det slumpmässiga talet så vill vi se till så att det inte överstiger beloppet.
		if (summa + random >= belopp)
		{
			break;
		}

		summa = summa + random;
		antalTal = antalTal + 1;
	}
	
	printf("Antal tal som summerats: %d \n", antalTal);
	printf("Summa: %d\n", summa);
	
	// Om användaren skriver in ett belopp som är mindre än det intervall som vi genererar tal för så kan vi
	// ha avbrutit while-loopen innan vi summerat några tal.
	if (summa > 0)
	{
		printf("Medelvärde: %.1f\n", summa / (float)antalTal);
	}
	else
	{
		printf("Inget medelvärde eftersom att antal tal var 0.\n");
	}

	system("pause");

	return 0;
}
