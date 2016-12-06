#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, tamanho;
	int direita[31], esquerda[31];
	char pe;

	while (scanf("%d", &n) != EOF) 
	{
		int total=0;
		for (int i = 30; i <= 60; ++i)
		{
			direita[i-30] = 0;
			esquerda[i-30] = 0;
		}
		for (int i = 0; i < n; ++i)
		{
			scanf("%d %c", &tamanho, &pe);
			if (pe=='D') {
				direita[tamanho-30]++;
			} else {
				esquerda[tamanho-30]++;
			}
		}
		for (int i = 30; i <= 60; ++i)
		{
			if (direita[i-30] < esquerda[i-30])
				total+=direita[i-30];
			else 
				total+=esquerda[i-30];
		}
		printf("%d\n", total );
	}

}