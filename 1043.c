// Triangulo

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	double a, b, c, mod;

	scanf ("%lf %lf %lf", &a, &b, &c);

	mod = ((b-c) > 0) ? (b-c)*(-1) : b-c;

	if ((mod < a) && (a < (b+c))) { // e triangulo
		printf ("Perimetro = %.1lf\n", a+b+c);
		return 0;
	}

	// area trapezio -- A = ((B.h)/2) * h
	printf ("Area = %.1lf\n", ((a+b)/2)*c);

	return 0;
}