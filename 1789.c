#include <stdio.h>

int main(int argc, char const *argv[])
{
	int L, v, velocidade, nivel;
	while (scanf("%d", &L) != EOF) 
	{ 
		velocidade=0;
		for (int i = 0; i < L; ++i)
		{
			scanf("%d", &v);
			if (v > velocidade) {
				velocidade = v;
				if (v < 10)
					nivel = 1;
				else if (v < 20)
					nivel = 2;
				else 
					nivel = 3;
			}
		}
		printf("%d\n", nivel ); 
	} 
}
