// Fibonacci, quantas chamadas?

#include <stdio.h>

int total, calls;

int fib (int n)
{
	calls++;
	if (n==0 || n==1){
		total += n;
		return 1;
	} else 
		return fib(n-1)+fib(n-2);
}

int main ()
{
	int t, v, i, l;
	scanf ("%d", &t);
	for (i = 0; i < t; ++i)
	{
		calls = 0;
		total = 0;
		scanf ("%d", &v);
		l = fib(v);
		printf("fib(%d) = %d calls = %d\n", v, calls-1, total);	
	}

	return 0;
}