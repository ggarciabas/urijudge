// Pares, impares, posistivos e negativos

#include <stdio.h>

int main () {
	int v, p=0, i=0, po=0, ne=0, c;

	for (c =0; c<5; ++c) {
		scanf ("%d", &v);
		if (v > 0) 
			po++;
		else if (v < 0)
			ne++;
		if ((v%2) == 0)
			p++;
		else 
			i++;
	}

	printf ("%d valor(es) par(es)\n", p);
	printf ("%d valor(es) impar(es)\n", i);
	printf ("%d valor(es) positivo(s)\n", po);
	printf ("%d valor(es) negativo(s)\n", ne);
	return 0;
}