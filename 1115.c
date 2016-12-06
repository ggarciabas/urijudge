// Quadrante

#include <stdio.h>

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF && (x && y))
    {
        if (y > 0)
            if (x > 0)
                printf("primeiro\n");
            else
                printf("segundo\n");
        else if (x < 0)
            printf("terceiro\n");
        else
            printf("quarto\n");
    }
    return 0;
}