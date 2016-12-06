/*
LEFT: move uma unidade para a esquerda (diminui p em 1, onde p é a posição do robô antes de mover)
RIGHT: move uma unidade para a direita (incrementa p em 1)
SAME AS i: executa a mesma ação que na i-ésima instrução. É garantido que i é um inteiro positivo não maior que o número de instruções já executadas.
*/

#include <stdio.h>
#include <string.h>

int main () {
	int ct, i, op, j, p, count, num;
	char comm[10];
	int operation[2]={-1,1};
	int last[101];

	scanf ("%d\n", &ct);
	count=0;
	for (i = 0; i < ct; ++i)
	{
		p=0;
		count=0;
		scanf ("%d\n", &op);
		for (j = 0; j < op; ++j)
		{
			scanf ("%[^\n]\n", comm);
			if (strcmp("LEFT", comm)==0)
			{
				p--;
				last[count++]=0;
			} else if (strcmp("RIGHT", comm)==0)
			{
				p++;
				last[count++]=1;
			} else {
				sscanf(comm, "SAME AS %d", &num);
				last[count++]=last[num-1];
				//printf("[%d]\n", last[num-1]);
				p += operation[last[num-1]];
			}
		}
		printf("%d\n", p);
	}

	return 0;
}