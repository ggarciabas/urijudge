// Soma de valores consecutivos

#include <stdio.h>

int main () {
    int m, n, h, l, s, i;
    
    scanf("%d %d", &m, &n);
    
    while (m>0 && n>0) {
        s=0;
        if (m > n) {
            h = m;
            l = n;
        } else {
            h = n;
            l = m;
        }
        
        for (i=l; i<=h; ++i) {
            s+=i;
            printf("%d ", i);
        }
        
        printf("Sum=%d\n", s);
        scanf("%d %d", &m, &n);
    }
    
    
    return 0;
}