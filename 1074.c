// Par ou impar

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int qt, c;
	double l;

	scanf ("%d", &qt);

	for (c=0; c<qt; ++c) {
		scanf ("%lf", &l);

		if (l!=0) {
			if (fmod(l,2)==0)
				printf ("EVEN ");
			else 
				printf ("ODD ");
			if (l>0)
				printf ("POSITIVE\n");
			else
				printf ("NEGATIVE\n");
		} else
			printf ("NULL\n");
	}

	return 0;
}