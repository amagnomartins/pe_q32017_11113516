#include <stdio.h>

int fatorial (int n){
	if (n == 1) return 1;
	return n * fatorial(n-1);
}

int coefbin (int n, int k){
	int coeficiente;
	coeficiente = (fatorial(n))/(fatorial(k)*fatorial(n-k));
	return coeficiente;
}

int main () {
	int n, k, coeficiente;
	scanf("%d %d", &n, &k);
	coeficiente = coefbin(n, k);
	printf("%d\n", coeficiente);
}
