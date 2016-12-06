// Tabuada

#include <stdio.h>
#include <stdlib.h>

int main () {
	int n, c;

	scanf ("%d", &n);

	for (c=1; c<=10; ++c)
		printf ("%d x %d = %d\n", c, n, c*n);

	return 0;
}