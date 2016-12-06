// Multiplos 

#include <stdio.h>
#include <stdlib.h>

int main () {
	int a, b;

	scanf ("%d %d", &a, &b);

	if (!((a>b) ? (a%b) : (b%a))) {
		printf ("Sao Multiplos\n");
		return 0;
	}

	printf ("Nao sao Multiplos\n");
	return 0;
}