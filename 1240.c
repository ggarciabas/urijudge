// Encaixa ou não encaixa 1

#include <stdio.h>
#include <string.h>

int main()
{
	int n, ts1, ts2;
	char s1[12], s2[12];

	scanf ("%d", &n);

	for (; n>0; n--)
	{
		scanf ("%s %s", s1, s2);
		ts1 = strlen(s1);
		ts2 = strlen(s2);
		if (ts1 < ts2) {
			printf("nao encaixa\n");
			continue;
		}
		if (strcmp(s2, &s1[ts1-ts2]) == 0)
		{
			printf("encaixa\n");
		} else {
			printf("nao encaixa\n");
		}
	}

	return 0;
}