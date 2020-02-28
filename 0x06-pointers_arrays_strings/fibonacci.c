#include <stdio.h>
long double fibonacci (int);
int main()
{
	int n= 40;
	printf("El %d número de Fibonacci es %Lf\n", n,fibonacci(n));
}
long double fibonacci(int n)
{
	if (1 == n || 2 == n) {
		return 1;
	} else {
		return (fibonacci(n-1) + fibonacci(n-2));
	}
} 
