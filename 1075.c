// Resto 2

#include <stdio.h>
#include <stdlib.h>

int main () {
	int n, c;

	scanf ("%d", &n);

	for (c=0; c<10000; ++c)
		if (c%n == 2)
			printf ("%d\n", c);	

	return 0;
}