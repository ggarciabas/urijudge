// Sequencia ij 4

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	double i=0, j=1, n=1;

	while (i<=2) {
		//printf ("i=%.17lf j=%.17lf \n",i,j);
		if ((fmod(i,1) == 0 || i==1.9) && (fmod(j,1) == 0 || j==1.9 || j==3))
			printf ("I=%.0lf J=%.0lf\n", i, j);
		else if  (fmod(j,1) == 0 && fmod(i,1) != 0) 
			printf ("I=%.0lf J=%.1lf\n", i, j);
		else if (fmod(i,1) == 0 && fmod(j,1) != 0)
			printf ("I=%.0lf J=%.1lf\n", i, j);	
		else 
			printf ("I=%.1lf J=%.1lf\n", i, j);
		j+=1;
		if (j>n+2) {
			n+=0.2;
			j=n;
			i+=0.2;
		} 
	}

	return 0;
}