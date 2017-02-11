// Zerinho ou um

/*
	Entrada

A entrada é composta por vários casos de teste. Cada caso de teste consiste de uma única linha, que contém três inteiros A, B e C (A,B,C só podem ser 0 ou 1), indicando respectivamente os valores escolhidos por Alice, Beto e Clara. O final da entrada é determinado por EOF (End of File).

Saída

Para cada caso de teste, seu programa deve produzir uma única linha, contendo um único caractere. Se o vencedor é Alice o caractere deve ser ‘A’, se o vencedor é Beto o caractere deve ser ‘B’, se o vencedor é Clara o caractere deve ser ‘C’ e se não há vencedor o caractere deve ser ‘*’ (asterisco).
*/

#include <stdio.h>

int main () {
	int a, b, c;

	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (((a&&b) && (b&&c))||((!a&&!b)&&(!b&&!c))) { // todos iguais à 1 || 0
			printf("*\n");
		} else if ((a&&b) || (!a&&!b)) {
			printf("C\n");
		} else if ((a&&c) || (!a&&!c)) {
			printf("B\n");
		} else {
			printf("A\n");
		}
	}

	return 0;
}