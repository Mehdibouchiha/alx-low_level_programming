#include <unistd.h>

/**
 * print_rev - Prints a sting in reverse
 * @s: The string to print .
 * Return: void
 */
void print_rev(char *s)

{
int i = 0;
while (s[i])
	i++;
while (i--)
{
	write(s[i]);
}
_putchar('\n');

}
