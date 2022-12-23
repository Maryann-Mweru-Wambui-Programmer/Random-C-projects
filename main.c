#include <stdio.h>
#include <stdlib.h>
/**
* game - function that checks whether the number
* entered matches the users input
* Return: Always 0.
*/
int main(void)
{
	int i, trials, j, count;

	trials = 5;
	count = 0;
	j = rand() % 10;
	while (count < trials)
	{
		printf("Enter a random number between 1 and 10: ");
		scanf("%d", &i);
		if (i == j)
		{
			printf("HURRAY, CORRECT GUESS");
			break;
		}
		else if (i > j)
		{
			printf("GUESS LOWER");
			count++;
		}
		else if (i < j)
		{
			printf("GUESS HIGHER");
			count++;
		}
		else
		{
			printf("INCORRECT INPUT TRY AGAIN :((");
			count++;
		}
	}
	printf("GAME OVER!!");
	return (0);
}
