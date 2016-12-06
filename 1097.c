// Sequencia IJ 3

#include <stdio.h>
#include <stdlib.h>

int main () {
	int n=7, i=1, j=7;

	while (i<=9) {
		printf ("I=%d J=%d\n", i, j--);
		if (j<n-2) {
			n+=2;
			j=n;
			i+=2;
		}

	}

	return 0;
}