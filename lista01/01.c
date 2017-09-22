/* recebe um valor inteiro e retorna se é par ou ímpar*/
#include <stdio.h>

int main() {
		int valor;
		printf ("Entre com um valor") ;
		scanf ("%d",&valor) ;
		if ((valor%2)==0) {
				printf ("Numero e par\n") ;
		} else {
				printf ("Numero e impar\n") ;
		}
		
		return 0;
}
