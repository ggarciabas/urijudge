// Tempo de um evento

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

int main () {
	std::string lixo;
	int di, hi, mi, si, df, hf, mf, sf, d, h, m, s;

	std::cin >> lixo >> di >> hi;
	std::cin >> lixo >> mi >> lixo >> si >> lixo >> df >> hf >> lixo >> mf >> lixo >> sf;

	d = df - di;

	if (hi > hf) {
		d--;
		h = (24-hi)+hf;
	} else {
		h = hf - hi;
	}

	if (mi > mf) {
		h--;
		m = (60-mi)+mf;
	} else {
		m = mf -mi;
	}

	if (si > sf) {
		m--;
		s = (60-si)+sf;
	} else {
		s = sf - si;		
	}

	printf ("%d dia(s)\n", d);
	printf ("%d hora(s)\n", h);
	printf ("%d minuto(s)\n", m);
	printf ("%d segundo(s)\n", s);
	
	return 0;
}