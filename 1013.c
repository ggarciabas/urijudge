// https://www.urionlinejudge.com.br/judge/pt/problems/view/1013
#include <stdio.h>
#include <math.h>

int main () {
	
	int a, b, c, maior;

	while (scanf ("%d %d %d", &a, &b, &c) != EOF) {

		maior = (a+b+abs(a-b)) / 2;
		printf("%d eh o maior\n", (maior+c+abs(maior-c)) / 2);

	}

	return 0;
}