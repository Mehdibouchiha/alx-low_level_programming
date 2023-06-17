#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	/* Print numbers 0-9 */
	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	/* Print lowercase letters a-f */
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

