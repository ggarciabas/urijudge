/*Leia 4 valores inteiros A, B, C e D. 
A seguir, se B for maior do que C e se D for maior do que A, 
e a soma de C com D for maior que a soma de A e B e se C e D,
ambos, forem positivos e se a variável A for par escrever a mensagem
 "Valores aceitos", senão escrever "Valores nao aceitos".*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%s\n", ((b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 && a%2 == 0)) ? "Valores aceitos" : "Valores nao aceitos" ); 
	return 0;
}
