#include <stdio.h>
#include <math.h>
#include <complex.h>

double delta(double a, double b, double c){
	double del;
	del = pow(b, 2) - 4*a*c;
	
	if (del>=0){return sqrt (del);
	} else { return csqrt (del);}
}

double bhaskarasoma (double a, double b, double c){
	double bhask;
	bhask = (-b+delta(a, b, c))/(2*a);
	return bhask;
}

double bhaskarasub (double a, double b, double c){
	double bhask;
	bhask = (-b-delta(a, b, c))/(2*a);
	return bhask;
}

	
