// Soma impares consecutivo I

#include <stdio.h>
#include <stdlib.h>

//-5 -4 -3 -2 -1 0 1 2 3 4 5 6


int main () {
	int a, b, soma=0, i, f, c;

	scanf ("%d %d", &a, &b);

	i = (a>b) ? b : a;
	f = (a>b) ? a : b;

	//printf ("%d %d\n", i, f);

	for (c=i+1; c<f; ++c) {
		if ((c%2)!=0)
			soma += c;
	}

	printf ("%d\n", soma);

	return 0;
}