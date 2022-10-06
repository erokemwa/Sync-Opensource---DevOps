#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**OA
 * main - function for selecting tv show based on preferences
 * @select1 - choice 1
 * @select2 - choice 2
 * Return: 0
 * uses betty style
 */
int main(void)
{
	int select1, select2;
	int i = 0;
	char s12[][20] = {"Better Call Saul", "House of Cards", "Gotham"};
	char s11[][20] = {"Narcos", "Black Mirror", "Game of Thrones"};
	char s21[][20] = {"Modern Family", "Peaky Blinders", "Ozark"};
	char s22[][20] = {"Two And a Half Men", "The Flash", "WandaVision"};	

	printf("Choose either: \n1. Breaking Bad\n2. Big Bang Theory\n");
	while(i < 3)
	{
		scanf("%d", &select1);
		if (select1 == 1 || select1 == 2)
		{
			printf("Selected %d, select no. 2: \n", select1);
			break;
		}
		else
		{
			printf("Select either 1 or 2\n");
		}
		i++;
	}
	printf("Choose either: \n1. Money Heist \n2. The Boys\n");
	i = 0;
	while(i < 3)
	{
		scanf("%d", &select2);
		if (select2 == 1 || select2 == 2)
		{
			printf("Selected: %d.\n", select2);
			break;
		}
		else
		{
			printf("Try again: \n");
		}
		i++;
	}
	i = 0;
	while(i < 5)
	{
	if (select1 == 1 && select2 == 1)
	{
		printf("Based on your choices, we think you might like: %s\n", s11[rand() % 3]);
	printf("Press Enter to generate another recommendation \n");
	getchar();
	}
	else if (select1 == 1 && select2 == 2)
	{
		printf("Based on your choices, we think you might like: %s\n", s12[rand() % 3]);
	printf("Press Enter to generate another recommendation \n");
	getchar();
	}
	else if (select1 == 2 && select2 == 1)
	{
		printf("Based on your choices, we think you might like: %s\n", s21[rand() % 3]);
	printf("Press Enter to generate another recommendation \n");
	getchar();
	}
	else if (select1 == 2 && select2 == 2)
	{
		printf("Based on your choices, we think you might like: %s\n", s22[rand() % 3]);
	printf("Press Enter to generate another recommendation \n");
	getchar();
	}
	i++;
	}

	return 0;
}
