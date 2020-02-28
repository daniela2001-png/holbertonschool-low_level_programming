#include <stdio.h>
//prueba de string con un entero//

int main ()
{

	char *str = "daniela";

	printf("%c\n", *(str + 3));
	*(str + 3) = *(str + 1);

	printf("%c\n", *(str + 3));

	return (0);
}
