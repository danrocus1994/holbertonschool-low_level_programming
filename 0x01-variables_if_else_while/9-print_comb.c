#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
putchar('0' + x);
putchar('0' + y);
if (x < 10 && y < 9)
{
putchar(',');
putchar(' ');
}
}
}

return (0);
}
