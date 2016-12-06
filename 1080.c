// Maior e posiscao

#include <stdio.h>
#include <stdlib.h>

int main () {
	double v=0, l;
	int pos, c;

	for (c=1; c<=100; ++c) {
		scanf ("%lf", &l);
		if (l>v) {
			v = l;
			pos = c;
		}
	}

	printf ("%.0lf\n%d\n", v, pos);

	return 0;
}