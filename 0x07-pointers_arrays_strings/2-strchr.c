#include "main.h"
#include <string.h>
/**
  * _strchr - Locate the first occurance of a char in a str
  * @s: String
  * @c: The char to locate in str s
  * Return: Pointer to the first occurance of c in s
  */
char *_strchr(char *s, char c)
{
	char *ptr;
	int i;
	int s_len;

	s_len = strlen(s)
	i = 0;
	while (i < s_len)
	{
		if (c == s[i])
		{
			*ptr = &str[i];
			break;
			return (ptr);
		}
		else
			return (NULL);
		i++;
	}
}

