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
for (x = 0; x < 10; x++)
{
putchar('0' + x);
if (x != 9)
{
int f;
for (f = 44; f >= 32; f -= 12)
{
putchar(f);
}
}
}
putchar('\n');
return (0);
}
