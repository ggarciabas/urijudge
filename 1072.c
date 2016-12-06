// Intervalo 2

#include <stdio.h>
#include <stdlib.h>

int main () {
	double l;
	int n, in=0, out=0, c;

	scanf ("%d", &n);

	for (c=0; c<n; ++c) {
		scanf ("%lf	", &l);
		if (l >= 10 && l <= 20)
			in++;
		else 
			out++;
	}

	printf ("%d in\n", in);
	printf ("%d out\n", out);
	
	return 0;
}