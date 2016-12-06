// Tempo de jogo com minutos

#include <stdio.h>
#include <stdlib.h>

int main () {
	int hi, mi, hf, mf, h, m;

	scanf ("%d %d %d %d", &hi, &mi, &hf, &mf);

	if (hi == hf && mi == mf) {
		printf ("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		return 0;
	} else if (hi < hf)
		h = hf - hi;
	else if (hi > hf)
		h = (24 - hi) + hf;

	if (mi > mf) {
		h = (hi != hf) ? h-- : 23;
		m = 60 - mi + mf;
	} else {
		m = mf - mi;
	}

	printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
	return 0;
}