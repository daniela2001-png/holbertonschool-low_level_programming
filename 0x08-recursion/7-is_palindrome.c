#include "holberton.h"
/**
 * longitud - check the code for Holberton School students.
 * @s:string
 * Return: Always 0.
 */

int longitud(char *s)
{
	if (*s != '\0')
		{   s++;
			return (1 + longitud(s));
		}
	return (0);
}

/**
 * others - check the code for Holberton School students.
 * @fin : end of my s
 * @inicio : begging of my string
 * @s : string
 * @longitud : lenght of string
 * Return: Always 0.
 */

int others(int inicio, int fin, char *s, int longitud)
{

	if (s[fin] == s[inicio] && fin >= 0 && inicio <= longitud)
	{
		return (1 * others(inicio + 1, fin - 1, s, longitud));
	}
	else if (fin <= 0 && inicio >= longitud)
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - check the code for Holberton School students.
 * @s :string
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int inicio = 0;
	int fin;
	int magnitud;

	magnitud = fin = longitud(s);
	magnitud--;
	fin--;
	return (others(inicio, fin, s, magnitud));

}
