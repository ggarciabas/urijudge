// Dividindo X por Y

#include <stdio.h>

int main()
{
    int cases;
    scanf("%d", &cases);
    int x, y;
    while (cases--)
    {
        scanf("%d %d", &x, &y);
        if (y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n", (double)x / y);
    }
    return 0;
}