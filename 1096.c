// Sequencia IJ 2

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i=1,j=7;

	while (i<=9) {
		printf ("I=%d J=%d\n", i, j--);
		if (j<5) {
			j=7;
			i+=2;
		}

	}

	return 0;
}