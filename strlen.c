#include "main.h"
/**
 * _strlen - calculates length of string
 * @str: string to calculate for
 * Return: length of string
 */
int _strlen(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
;
return (i);
}
/**
 * _strlenc - _strlen for const
 * @str: Type char pointer
 * Return: length of const string
 */
int _strlenc(const char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
;
return (i);
}
