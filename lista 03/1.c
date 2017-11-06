#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int numvogal;
	char entrada [255];
	fgets(entrada, 255, stdin);
	numvogal=contavogais(entrada);
	printf("%d\n", numvogal);
	return 0;
}


int contavogais (char entrada[])
{
	int n=0, contador=0;
	while (entrada[n]!='\0') {
		if ( entrada[n] == 'a' || entrada[n] == 'e' || entrada[n] == 'i' || entrada[n] == 'o' || entrada[n] == 'u') {
			contador++;
		}
		n++;
	}
	return contador;
} 
