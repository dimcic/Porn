#include <stdio.h>  
#include <math.h>

#define PI  3.14159265358979

int main()
{
	system("chcp 1252");
	
	int val = 0;

	do
	{
		printf("Kalkylator\n");
		printf("1. Kvadratroten\n");
		printf("2. Absolutbeloppet\n");
		printf("3. Exponentialen e höjt till x\n");
		printf("4. Naturliga logaritmen\n");
		printf("5. Sinus\n");
		printf("6. Cosinus\n");
		printf("7. För avsluta\n");

		scanf_s("%i", &val);
		
		system("cls");

		switch (val)
		{
			case 1:
			{
				float tal = 0;
				printf("Ange tal: ");
				scanf_s("%f", &tal);
				float kvadratroten = sqrt(tal);
				printf("Kvadratroten ur %.1f är %.1f\n", tal, kvadratroten);
				break;
			}
			case 2:
			{
				float tal = 0;
				printf("Ange tal: ");
				scanf_s("%f", &tal);
				float absolutbeloppet = abs(tal);
				printf("Absolutbeloppet av %.1f är %.1f\n", tal, absolutbeloppet);
				break;
			}
			case 3:
			{
				float x = 0;
				printf("Ange x: ");
				scanf_s("%f", &x);
				float exponentialen = exp(x);
				printf("Exponentialen e höjt till %.1f är lika med %.1f\n", x, exponentialen);
				break;
			}
			case 4:
			{
				float tal = 0;
				printf("Ange tal: ");
				scanf_s("%f", &tal);
				float naturligalogaritmen = log(tal);
				printf("Naturliga logaritmen av %.1f är %.1f\n", tal, naturligalogaritmen);
				break;
			}
			case 5:
			{
				float tal = 0;
				printf("Ange tal: ");
				scanf_s("%f", &tal);
				float sinus = sin(tal);
				printf("Sinus av %.1f är %.1f\n", tal, sinus);
				break;
			}
			case 6:
			{
				float tal = 0;
				printf("Ange tal: ");
				scanf_s("%f", &tal);
				float cosinus = cos(tal);
				printf("Cosinus av %.1f är %.1f\n", tal, cosinus);
				break;
			}
			case 7:
				printf("Tack och adjö!");
				break;
			default:
				printf("Ogiltigt val!\n");
				break;
		}

		printf("\n");
	} 
	while(val != 7);

	system("pause");
	
	return 0;
}