// Sort simples

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

bool crescente (int i, int j) {
	return (i<j);	
}

int main () {
	std::vector<int> vetor, leitura;
	int a;

	for (int i = 0; i < 3; ++i) {
		scanf ("%d", &a);
		leitura.push_back(a);
		vetor.push_back(a);
	}

	std::sort (vetor.begin(), vetor.end(), crescente);

	for (std::vector<int>::iterator it=vetor.begin(); it != vetor.end(); ++it)
		printf ("%d\n", *it);

	printf ("\n");

	for (std::vector<int>::iterator it=leitura.begin(); it != leitura.end(); ++it)
		printf ("%d\n", *it);				

	return 0;
}