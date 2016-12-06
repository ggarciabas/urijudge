// Imposto de renda

#include <stdio.h>
#include <stdlib.h>

int main () {
	double v, i=0;

	scanf ("%lf", &v);

	if (v < 2000) {
		printf ("Isento\n");
		return 0;
	} else {
		v -= 2000;
		if (v > 1000) {
			i += (8*1000)/100;
			v -= 1000;
			if (v > 1500) {
				i += (18*1500)/100;
				v -= 1500;
				i += (28*v)/100;
			} else {
				i += (18*v)/100;
			}
		} else {
			i += (8*v)/100;
		}
	} 

	printf ("R$ %.2lf\n", i);

	return 0;
}