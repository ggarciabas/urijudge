// Pares entre cinco numeros

#include <stdio.h>
#include <stdlib.h>

int main () {
	int v, qt=0, c;

	for (c=1; c<=5; ++c){
		scanf ("%d", &v);
		if ((v%2) == 0){
			qt++;
		}
	}

	printf ("%d valores pares\n", qt);

	return 0;
}