// Lanche

#include <stdio.h>
#include <stdlib.h>

int main () {
	int a, b;
	double tot;

	scanf ("%d %d", &a, &b);

	switch (a) {
		case 1:
			tot = b*4.00;
			break;
		case 2:
			tot = b*4.50;
			break;
		case 3:
			tot = b*5.00;
			break;
		case 4:
			tot = b*2.00;
			break;
		case 5:
			tot = b*1.50;
			break;

	}

	printf ("Total: R$ %.2f\n", tot);

	return 0;
}