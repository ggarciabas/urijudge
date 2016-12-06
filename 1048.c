// Aumento de salario

#include <stdio.h>
#include <stdlib.h>

int main () {
	double valor, reaj;

	scanf ("%lf", &valor);

	if (valor <= 400) {
		reaj = (15*valor)/100;
		printf ("Novo salario: %.2lf\n", valor+reaj);
		printf ("Reajuste ganho: %.2lf\n", reaj);
		printf ("Em percentual: 15 %c\n", 37);
	}
	else if (valor <= 800){
		reaj = (12*valor)/100;
		printf ("Novo salario: %.2lf\n", valor+reaj);
		printf ("Reajuste ganho: %.2lf\n", reaj);
		printf ("Em percentual: 12 %c\n", 37);
	}
	else if (valor <= 1200){
		reaj = (10*valor)/100;
		printf ("Novo salario: %.2lf\n", valor+reaj);
		printf ("Reajuste ganho: %.2lf\n", reaj);
		printf ("Em percentual: 10 %c\n", 37);
	}
	else if (valor <= 2000){
		reaj = (7*valor)/100;
		printf ("Novo salario: %.2lf\n", valor+reaj);
		printf ("Reajuste ganho: %.2lf\n", reaj);
		printf ("Em percentual: 7 %c\n", 37);
	}
	else if (valor > 2000){
		reaj = (4*valor)/100;
		printf ("Novo salario: %.2lf\n", valor+reaj);
		printf ("Reajuste ganho: %.2lf\n", reaj);
		printf ("Em percentual: 4 %c\n", 37);
	}

	return 0;
}