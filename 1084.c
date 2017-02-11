// Apagando e ganhando

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, d, i, j, digit, maior, total, tdigitos, dig[100001];
	char digits[100001];
	int pos_value[100001];

	scanf("%d %d\n", &n, &d);
	while (n!=d) { 
		tdigitos = n-d; // total de digitos do numero
		printf("Tdig %d\n", tdigitos);
		maior = -1;
		for (i = 0; i < n; ++i)
		{// procurando primeiro digito e lendo
			scanf("%c", &digits[i]);
			dig[i] = atoi(&digits[i]);
			printf("%d[%d, %d]", dig[i], dig[i] > maior, i);
			if (dig[i] > maior && i <= (n-tdigitos)) // tem que ter digitos suficientes restantes
			{
				printf("maior encontrado %d\n", i);
				maior=dig[i];
				pos_value[0] = i;
			}
		}
		printf("\nLeitura completa pv[0]=%d\n", pos_value[0]);
		//scanf ("\n");
		for (j=1; j < (n-d); j++) {
			maior = -1;
			for (i = pos_value[j-1]+1; i < n; ++i)
			{
				printf("%d[%d, %d]", dig[i], dig[i] > maior, i);
				printf("comp %d [%d]\n", i < (n-tdigitos), (n-tdigitos+j));
				if (dig[i] > maior && i <= (n-tdigitos+j)) // tem que ter digitos suficientes restantes
				{
					printf("maior encontrado %d\n", i);
					pos_value[j] = i;
				}
			}
		}

		total = 0;
		for (j=(n-d), i=0; j > 0 ; j--, i++) {
			printf("j=%d pv[%d]=%d\n", j, i, pos_value[i]);
			total += pow(10, j) * dig[pos_value[i]];
		}

		printf("%d\n", total);
		scanf("%d %d", &n, &d);
	}

	return 0;
}