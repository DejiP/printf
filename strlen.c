/**
 * _strlen - checks length of string
 * @str : string for length check
 * Return: length of string
 */

int _strlen(const char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
