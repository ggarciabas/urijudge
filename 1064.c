// Positivos e media

#include <stdio.h>
#include <stdlib.h>

int main () {
	double v, media=0;
	int qt=0, c;

	for (c = 1; c <= 6; ++c) {
		scanf ("%lf",&v);
		if (v>=0) {
			qt++;
			media += v;
		}
	}

	printf ("%d valores positivos\n", qt);
	printf ("%.1lf\n",media/qt);

	return 0;
}