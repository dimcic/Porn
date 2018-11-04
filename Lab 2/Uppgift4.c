#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	srand((int)time(NULL));
	
	int dice1 = 1, dice2 = 1, dice3 = 1;
	char spela;
	int insats;

	printf_s("Välkommen, börja spela! \nVarje omgång kostar 10kr \n\nAnge belopp du vill spela för:");
	scanf_s("%d", &insats);

	do
	{
		printf_s("Spela? \nType |J = Ja| |N = Nej| \n");
		scanf_s("%c", &spela);
		spela = toupper(getchar());

		if (spela != 'J')
		{
			break;
		}

		if (insats >= 10)
		{
			insats = insats - 10;

			// Resten vid division med 7 kan maximalt bli 6.
			dice1 = rand() % 7;
			dice2 = rand() % 7;
			dice3 = rand() % 7;

			printf_s("\nTärning: %d %d %d\n", dice1, dice2, dice3, insats);

			if (dice1 == 6 && dice2 == 6 && dice3 == 6)
			{
				insats = insats + 100;
				printf("GRATTIS! \nDin vinst: 100kr! \nKvar att spela för: %d \n", insats);
			}
			else if ((dice1 == dice2) && (dice2 == dice3))
			{
				insats = insats + 50;
				printf_s("Grattis! \nDin vinst: 50kr \nKvar att spela för: %d \n", insats);
			}
			else if ((dice1 == dice2) || (dice2 == dice3) || (dice1 == dice3))
			{
				insats = insats + 10;
				printf("Grattis! \nDin vinst: 10kr \nKvar att spela för: %d \n", insats);
			}
			else
			{
				printf("Du har inte vunnit något, lycka till nästa gång! \nKvar att spela för: %d \n", insats);
			}
		}
		else
		{
			printf("Belopp är ej tillräcklig: %d\n", insats);
			printf("Vill du fortsätta spela? \nTryck |J = Ja| |N = Nej| \n");
			scanf_s("%c", &spela);
			spela = toupper(getchar());

			if (spela != 'J')
			{
				break;
			}

			printf("Ange belopp du vill spela för:");
			scanf_s("%d", &insats);
		}
	} while (spela == 'J');

	printf("Din slutsumma ligger på: %dkr\n\tVälkommen åter! \n", insats);

	system("PAUSE");
	return 0;
}