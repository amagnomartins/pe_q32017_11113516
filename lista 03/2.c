#include <stdio.h>
#include <stdlib.h>

void invertestring (char entrada[], int comeco, int final)
{
	int temp;
	while (comeco < final) {
		temp = entrada [comeco];
		entrada [comeco] = entrada [final];
		entrada [final] = temp;
		comeco++;
		final--;
	}
}

int main ()
{
	int tamanho=0, n=0;
	char entrada [255];
	fgets(entrada, 255, stdin);
	while (entrada [n] != '\0') {
		tamanho++;
		n++;
	}
	invertestring (entrada, 0, tamanho);
	for (int i=0; i<=tamanho; i++) {
		printf("%c",entrada[i]);
	}
	printf("\n");
	return 0;
}
