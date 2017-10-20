#include <stdio.h>

int main () {
	float larg, alt, comp, vol;
	scanf("%f %f %f", &larg, &alt, &comp);
	vol=larg*alt*comp;
	printf("%.2f\n", vol);
}
