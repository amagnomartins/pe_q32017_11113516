#include <stdio.h>
#include <stdlib.h>

void somaVetores (int v1[],int v2[],int v3[])
{
	for (int i = 0; i<5; i++) {
		v3[i] = v1[i] + v2[i];
	}
}



int main ()
{
	int v1[5], v2[5], v3[5];
	scanf ("%d %d %d %d %d", &v1[0], &v1[1], &v1[2], &v1[3], &v1[4]);
	scanf ("%d %d %d %d %d", &v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);
	somaVetores (v1, v2, v3);
	printf ("%d %d %d %d %d\n", v3[0], v3[1], v3[2], v3[3], v3[4]);
	return 0;
}
