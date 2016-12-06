// Quadrado de pares

#include <stdio.h>
#include <stdlib.h>

int main () {
	int n, c;

	scanf ("%d", &n);

	for (c=1; c<=n; ++c) {
		if ((c%2)==0) {
			printf ("%d^2 = %d\n", c, c*c);			
		}		
	}

	return 0;
}