// Validacao de nota

#include <stdio.h>

int main()
{
    char repetir = '1'; // Repetir? 1-sim, 2-nao
    double n1, n2;
    while (repetir == '1')
    {
        while (scanf("%lf ", &n1) != EOF && (n1 < 0 || n1 > 10))
            printf("nota invalida\n");
        while (scanf("%lf ", &n2) != EOF && (n2 < 0 || n2 > 10))
            printf("nota invalida\n");
        printf("media = %.2lf\n", (n1 + n2) / 2);
        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%c ", &repetir);
        }
        while (repetir != '1' && repetir != '2');
    }
    return 0;
}