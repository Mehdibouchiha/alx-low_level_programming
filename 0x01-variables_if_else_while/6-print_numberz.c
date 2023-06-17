#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit numbers of base 10 without using char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar(number + 48);
}

putchar('\n');

return (0);
}
