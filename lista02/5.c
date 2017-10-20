#include <stdio.h>

int fatorial (int n){
	int m=1;
	while (n>1){
		m=m*n;
		n-=1;
	}
	return m;
}

float coefbin (int n, int k){
	float coeficiente;
	coeficiente = (fatorial(n))/(fatorial(k)*fatorial(n-k));
	return coeficiente;
}

main () {
	int n, k;
	float coeficiente;
	scanf("%d %d", &n, &k);
	coeficiente = coefbin(n, k);
	printf("%f\n", coeficiente);
}
