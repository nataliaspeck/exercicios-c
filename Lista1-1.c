#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dado um n�mero inteiro positivo n, calcular a soma dos n primeiros n�meros
inteiros positivos. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n, soma=0, cont;
	printf ("Insira um n�mero inteiro positivo:\n");
	scanf ("%d", &n);
	if (n<=0){
		printf ("ERRO! nsira um n�mero inteiro positivo:\n");
		scanf ("%d", &n);
	}
	printf ("\n");
	for (cont = 0; cont < n; cont++){
		soma = soma + cont;
	}
	printf ("Soma: %d\n", soma);
	system ("pause");
	return 0;
}
