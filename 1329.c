/*
Mary won 3 times and John won 2 times
Mary won 5 times and John won 1 times
*/

#include <stdio.h>

int main () {
	int v, cc, i, m, j;

	scanf ("%d", &v);
	while (v != 0)
	{
		m=j=0;
		for (i = 0; i < v; ++i)
		{
			scanf ("%d ", &cc);
			if (cc == 0)
				m++;
			else
				j++;
		}
		printf("Mary won %d times and John won %d times\n", m, j);
		scanf ("%d", &v);
	}

	return 0;
}