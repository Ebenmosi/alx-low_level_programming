#include "main.h"

/**
 *
 * * print_alphabet - function that prints the alphabet, lower case
 * you can only use_putchar twice with your code
 * Return: nothing.
 * */
void print_alphabet(void)
{
int l = 'a';
while (l <= 'z')
{
_putchar(l);
l += 1;
}
_putchar(10);
}
