// Média 3

#include <stdio.h>
#include <stdlib.h>

int main () {
	double a, b, c, d, media, exame;

	scanf ("%lf %lf %lf %lf", &a, &b, &c, &d);

	media = ((a*2)+(b*3)+(c*4)+(d*1)) / 10;

	printf ("Media: %.1lf\n", media);

	if (media < 5)
		printf ("Aluno reprovado.\n");
	else if (media < 7) {
		printf ("Aluno em exame.\n");
		scanf ("%lf", &exame);
		printf ("Nota do exame: %.1lf\n", exame);
		media += exame;
		media /= 2;
		if (media < 5)
			printf ("Aluno reprovado.\n");
		else
			printf ("Aluno aprovado.\n");
		printf ("Media final: %.1lf\n", media);
	} else 
		printf ("Aluno aprovado.\n");

	return 0;
}