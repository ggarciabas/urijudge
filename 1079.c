// Medias ponderadas

#include <stdio.h>
#include <stdlib.h>

int main () {
	int qt, c;
	double a, b, d;

	scanf ("%d", &qt);

	for (c=1; c<=qt; ++c) {
		scanf ("%lf %lf %lf", &a, &b, &d);
		printf ("%.1lf\n", ((a*2)+(b*3)+(d*5))/10);
	}

	return 0;
}