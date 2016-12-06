#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	int freq[26];
	int max;
	int atual;
	int testes;
	scanf ("%i\n", &testes);

	int i,j;
	char frase[201];
	//char *frase;
	for (i = 0; i<testes; ++i) {
		max = 0;

		//scanf ("%m[^\n]\n", &frase);
		scanf ("%[^\n]\n", frase);
		//printf("%s\n", frase);

		for(j=0; j<26; ++j) {
			freq[j] = 0;
		}

		//freq = (int*) malloc (26*sizeof(int));
		// printf("%s\n", frase);
		for (j=0; j<strlen(frase); ++j) {
			atual = ((frase[j]>=97 && frase[j]<=122) ? frase[j]-97 : (frase[j]>=65 && frase[j]<=90) ? frase[j]-65 : -1);
			if (atual != -1) {
				freq[atual]++;
				if (freq[atual] > max) 
					max = freq[atual];
			}
		}
		for (j=0; j<26; ++j) {
			if (freq[j] == max) {
				printf("%c", j+97);
			}
		}
		printf("\n");
		//free(freq);
	}

	//free(frase);

	return 0;
}