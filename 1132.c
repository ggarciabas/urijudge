/*Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números 
que não são múltiplos de 13 entre X e Y, incluindo ambos.

Entrada

O arquivo de entrada contém 2 valores inteiros quaisquer, 
não necessariamente em ordem crescente.

Saída

Imprima a soma de todos os valores não divisíveis por 13 entre os dois 
valores lidos na entrada, inclusive ambos se for o caso.*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int min, max, soma=0;
	scanf("%d\n%d", &min, &max);
	if (min > max) {
		int aux = min;
		min = max;
		max = aux;
	}
	for (int i=min; i<=max; i++) 
	{
		if (i%13!=0)
		{
			soma+=i;
		}
	}
	printf("%d\n", soma);
}