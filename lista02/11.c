#include <stdio.h>
#include <math.h>

int BiDec (int binomial, int n)
{
	int decimal;
	if (binomial == 0) return 0;
	return ((binomial%10 * pow(2,n)) + BiDec(binomial/10, n+1));
}

int DecBi (int decimal)
{
	if (decimal == 0) return 0;
	return (decimal %2 + 10 * DecBi(decimal / 2));
}

int main()
{
	int opcao, n, conversao;
	scanf("%d %d", &n, &opcao);
	if (opcao == 1) conversao = DecBi(n);
	if (opcao == 2) conversao = BiDec(n, 0);
	printf("%d\n", conversao);
}
