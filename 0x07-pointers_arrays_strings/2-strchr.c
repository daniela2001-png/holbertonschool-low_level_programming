 #include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @c: is the character to found
 * @s: is the string in this case hello
 * Return: a pointer s
 */
char *_strchr(char *s, char c)
{

			for (; ; s++)
			{
				if (*s == c)
				{
					return (s);
				}
				if (!*s)
				{
					return (0);
				}
			}

			return (0);
}
