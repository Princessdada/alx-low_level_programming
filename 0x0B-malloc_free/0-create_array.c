#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array -> it creates array
* @size: size of the array
* @c: character
* Return: a point to the array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
return (NULL);
s = (char)malloc(size sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
s[i] = c;

return (s);
}
