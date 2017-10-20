#include <stdio.h>
#include <math.h>

float soma(float x, float y){
	return x+y;
}

float subtracao(float x, float y){
	return x-y;
}

float multiplicacao(float x, float y){
	return x*y;
}

float divisao(float x, float y){
	return x/y;
}

float potenciacao(float x, float y){
	return pow(x,y);
}

main() {
	int opcao;
	float x, y, operacao;
	scanf("%d\n", &opcao);
	scanf("%f %f", &x, &y);
	if (opcao==1){ operacao=soma(x, y);
	} else if (opcao==2) { operacao=subtracao(x, y);
	} else if (opcao==3) { operacao=multiplicacao(x, y);
	} else if (opcao==4) { operacao=divisao(x, y);
	} else if (opcao==5) { operacao=potenciacao(x, y);
	}
	printf ("%f\n", operacao);
}
