#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hora, minuto, atraso;
	while ( scanf("%d:%d", &hora, &minuto) != EOF) 
	{ 
		atraso=0;
		if (hora >= 8) {
			atraso+=(hora-8) * 60 + 60 + minuto;
		} else if (hora == 7) {
			atraso+=minuto;
		}


		printf("Atraso maximo: %d\n", atraso );
	}
}
