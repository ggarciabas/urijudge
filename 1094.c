// Experiencias

#include <stdio.h>
#include <stdlib.h>

int main () {
	int qt, l;
	char ch[1];
	double c=0, r=0, s=0, t=0, i;
	
	scanf ("%d", &qt);

	for  (i=0; i<qt; ++i) {
		scanf ("%d %c\n", &l, &ch[0]);
		switch (ch[0]) {
			case 'C': c+=l;
						break;
			case 'S': s+=l;
						break;
			case 'R': r+=l;
						break;
		}
		t += l;
	}

	printf ("Total: %.0lf cobaias\n", t);
	printf ("Total de coelhos: %.0lf\n", c);
	printf ("Total de ratos: %.0lf\n", r);
	printf ("Total de sapos: %.0lf\n", s);
	printf ("Percentual de coelhos: %.2lf %c\n", (c*100)/t, 37);
	printf ("Percentual de ratos: %.2lf %c\n", (r*100)/t, 37);
	printf ("Percentual de sapos: %.2lf %c\n", (s*100)/t, 37);

	return 0;
}