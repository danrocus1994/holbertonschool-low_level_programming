#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
char alpha = 'a';
int i = 0;
while (i < 26)
{
putchar(alpha + i);
i++;
}
putchar('\n');
return (0);
}
