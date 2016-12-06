#include <stdio.h>

int main(int argc, char const *argv[])
{
	int certo, resposta, qtd=0;
	scanf("%d", &certo);
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &resposta);
		if (resposta==certo)
		{
			qtd++;
		}
	}
	printf("%d\n", qtd );
}