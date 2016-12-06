// Tempo de jogo

#include <stdio.h>
#include <stdlib.h>

int main () {
	int a, b;

	scanf ("%d %d", &a, &b);

	printf ("O JOGO DUROU %d HORA(S)\n", (a>b) ? (24-a+b) : (b-a));

	return 0;
}