// Números positivos

#include <stdio.h>
#include <stdlib.h>

int main () {
	double a;
	int qt=0, c;

	for (c = 1; c <= 6; ++c) {
		scanf ("%lf", &a);
		if (a>0) 
			qt++;
	}

	printf ("%d valores positivos\n", qt);

	return 0;
}