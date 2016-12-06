// Senha Fixa

#include <stdio.h>

int main () {
    
    int s;
    
    scanf("%d", &s);
    while (s!=2002) {
        scanf("%d", &s);
        printf("Senha Invalida\n");
    }
    
	printf("Acesso Permitido\n");
    return 0;
}