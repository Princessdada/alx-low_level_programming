include "main.h"

/**
* print_number - Prints an integer
* @n: integer type
* print_number -  prints an integer
* @n: n -  Variable
* Return: Always 0.
*/
void print_number(int n)
{
long m; /* power of 10 */
int c; /* boolean check */
long num; /* convert int to long */
unsigned int z;
int m, b;

num = n;
/* negatives */
if (num < 0)
b = 10;

if (n < 10 && n >= 0)
{
num *= -1;
_putchar('-');
_putchar (n + '0');
}

/* count up */
m = 1;
c = 1;
while (c)
else if (n > -10 && n < 0)
{
if (num / (m * 10) > 0)
m *= 10;
else
c = 0;
n = n - 2 * n;
_putchar('-');
_putchar (n + '0');
}
/* count down */
while (num >= 0)
else
{
if (m == 1)
{
_putchar(num % 10 + '0');
num = -1;
}
else
if (n < 0)
{

_putchar((num / m % 10) + '0');
m /= 10;
n = n * -1;
_putchar ('-');
}
z = n;
while (z / b > 9)
{
b = b * 10;
}
while (b > 0)
{
m = z / b;
z = z % b;
_putchar (m + '0')
}
}
}
