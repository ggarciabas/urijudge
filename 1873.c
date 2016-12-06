#include <stdio.h>
#include <string.h>

int main () {
	int testes;
	char sheldon[8], rajesh[8];

	scanf ("%i\n", &testes);

	for (; testes > 0; testes--) {
		scanf ("%s %s\n", rajesh, sheldon);
		if (strcmp(rajesh, sheldon) == 0) {
			printf("empate\n");
		}else if (strcmp(rajesh, "tesoura") == 0) {
			if (strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "lagarto") == 0) {
				printf("rajesh\n");
			} else {
				printf("sheldon\n");
			}
		} else if (strcmp(rajesh, "papel") == 0) {
			if (strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "spock") == 0) {
				printf("rajesh\n");
			} else {
				printf("sheldon\n");
			}
		} else if (strcmp(rajesh, "pedra") == 0) {
			if (strcmp(sheldon, "lagarto") == 0 || strcmp(sheldon, "tesoura") == 0) {
				printf("rajesh\n");
			} else {
				printf("sheldon\n");
			}
		} else if (strcmp(rajesh, "lagarto") == 0) {
			if (strcmp(sheldon, "spock") == 0 || strcmp(sheldon, "papel") == 0) {
				printf("rajesh\n");
			} else {
				printf("sheldon\n");
			}
		} else { // spock
			if (strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "pedra") == 0) {
				printf("rajesh\n");
			} else {
				printf("sheldon\n");
			}
		}
	}

	return 0;
}