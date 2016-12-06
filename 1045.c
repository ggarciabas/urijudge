// Tipos de triangulos

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
bool decrescente (int i, int j) {
	return (i>j);	
}

int main () {
	double l;
	std::vector<double> lados;

	for (int c=0; c<3; ++c) {
		scanf ("%lf", &l);
		lados.push_back(l);
	}

	std::sort(lados.begin(), lados.end(), decrescente);

	if (lados.at(0) > (lados.at(1)+lados.at(2)))
		printf ("NAO FORMA TRIANGULO\n");
	if ((lados.at(0)*lados.at(0)) == ((lados.at(1)*lados.at(1)) + (lados.at(2) * lados.at(2))))
		printf ("TRIANGULO RETANGULO\n");
	if ((lados.at(0)*lados.at(0)) > ((lados.at(1)*lados.at(1)) + (lados.at(2) * lados.at(2))))
		printf ("TRIANGULO OBTUSANGULO\n");
	if ((lados.at(0)*lados.at(0)) < ((lados.at(1)*lados.at(1)) + (lados.at(2) * lados.at(2))))
		printf ("TRIANGULO ACUTANGULO\n");
	if ((lados.at(0) == lados.at(1)) && (lados.at(1) == lados.at(2)))
		printf ("TRIANGULO EQUILATERO\n");
	if ((lados.at(0) == lados.at(1)) || (lados.at(1) == lados.at(2)))
		printf ("TRIANGULO ISOSCELES\n");

	return 0;
}