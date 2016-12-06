// Seis numeros impares	

#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, qt=0;

	scanf ("%d", &x);

	while (qt<6) {
		if ((x%2)!=0) {
			printf ("%d\n", x);
			qt++;
		}
		x++;
	}

	return 0;
}