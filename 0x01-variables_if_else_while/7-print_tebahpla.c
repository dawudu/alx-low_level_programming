#include <stdio.h>

/**
*main - a program that prints the lowercase alphabet in reverse
*followed by a new line
*Return: Always 0
*/
int main(void)

{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}