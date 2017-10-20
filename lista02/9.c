#include <stdio.h>
#include <math.h>

int PotenciaRec (int x, int y)
{
	int resultado=1;
	while (y!=0){
		resultado*=x;
		y--;

	}
	return resultado;
}

int main() {
	int x, y, resultado;
	scanf("%d %d", &x, &y);
	resultado=PotenciaRec (x, y);
	printf("%d\n", resultado);
}
