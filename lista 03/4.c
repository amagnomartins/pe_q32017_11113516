#include <stdio.h>
#include <stdlib.h>

void transposta (int v1[3][3], int v2[3][3])
{
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++){
			v2[i][j]=v1[j][i];
		}
	}
}


int main() 
{
	int v1[3][3], v2[3][3];
	for (int i=0; i<3; i++) {
		scanf ("%d %d %d", &v1[i][0], &v1[i][1], &v1[i][2]);
	}
	transposta (v1, v2);
	for (int i=0; i<3; i++) {
		printf ("%d %d %d\n", v2[i][0], v2[i][1], v2[i][2]);
	}
	return 0;
}
